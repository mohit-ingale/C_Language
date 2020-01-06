/*Write a program last that prints the last n lines of its text input. By default n should be 5, but your program should allow an optional argument so that last -n prints out the last n lines, where n is any integer.*/
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	char s[100];
	int ct=0,ct1=0,flag=0,ch;
	FILE *file,*tfile;
	if(argc==2)						//Check if user has entered required lines
	{
		ch=*argv[1];
		flag=ch-'0';					//Store number of lines in flag
	}
		
	else if(argc>2)
	{
		printf("Invalid number of arguments");
		exit(1);
	}
	file=fopen("last.c","r");
	if(file==NULL)
	{
		printf("Source file could not be opened");
		exit(1);
	}
	while(1)						//Count the number of lines in the source
	{
		ch=fgetc(file);
		if(ch==EOF)
			break;
		if(ch=='\n')					//Increment count at every new line
			ct++;					
	}
	fclose(file);
	file=fopen("last.c","r");
	if(file==NULL)
	{
		printf("File could not be opened");
		exit(1);
	}
	tfile=fopen("Target.txt","w");
	if(tfile==NULL)
	{
		printf("Target file could not be opened");
		exit(1);
	}
	while(1)						//Use ct1 to count the lines passed
	{
		ch=fgetc(file);
		if(ch=='\n')					//Increment ct1 at every new line
			ct1++;				
		if(flag==0)					//If flag==0 consider last 5 lines
		{
			if(ct-ct1==5)				//To check if remaining line==required lines
			{
				break;
			}
		}
		else
		{
			if(ct-ct1==flag)
			{
				break;
			}
		}
	}
	while(1)						//Store the requied lines in Target
	{
		ch=fgetc(file);
		if(ch==EOF)
			break;
		fputc(ch,tfile);
		
	}
	fclose(file);
	fclose(tfile);
	tfile=fopen("Target.txt","r");
	while(fgets(s,100,tfile)!=NULL)				//Print Target
		printf("%s",s);
	printf("\n");
	fclose(tfile);
}
