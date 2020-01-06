//Write a c program to printing the same file on the console.
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int ch;
	char s[100];
	int ct=0;
	FILE *file1;
	
	file1=fopen("prog3.c","r");			//Open file in read mode
	if(file1==NULL)
	{
		printf("Cannot open the file");
		exit(1);
	}
	while(fgets(s,100,file1)!=NULL)			//Print file till EOF
		printf("%s",s);
	printf("\n");
	fclose(file1);
}
