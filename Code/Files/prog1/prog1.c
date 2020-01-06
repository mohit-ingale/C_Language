//Write a program to remove all the comments from a ‘C’ program.
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int ch;
	int flag=0;
	FILE *file1,*file2;
	
	file1=fopen("Sample.c","r");
	if(file1==NULL)
	{
		printf("File could not be opened");
		exit(1);
	}
	file2=fopen("Target.c","w");
	if(file2==NULL)
	{
		printf("File could not be opened");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(file1);
		if(ch==EOF)
			break;
		if(flag==0)
		{
			if(ch=='/')				//Check for single line comments
			{
				ch=fgetc(file1);
				if(ch=='/')
				{
					flag=1;			//Flag=1 for single line comments
					continue;
				}
				else if(ch=='*')		//Check for multi line comments
				{
					flag=2;			//Flag=2 for multi line comments
					continue;
				}
				else
				{
					fputc('/',file2);
					fputc(ch,file2);
					continue;
				}
			}
			fputc(ch,file2);			//Copy to Target file
		}
		else if(flag==1)				//If flag==1 ignore till line break
		{
			if(ch=='\n')
			{
				fputc(ch,file2);
				flag=0;
				continue;
			}
			else
				continue;
		}
		else if(flag==2)				//If flag==2 ignore till occurance of '*\'
		{
			if(ch=='*')
			{
				ch=fgetc(file1);
				if(ch=='/')
					flag=0;
				continue;
			}
			else
				continue;
		}
	}
	fclose(file1);
	fclose(file2);

}
