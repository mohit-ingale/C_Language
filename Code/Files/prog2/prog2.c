/*Write a program that will concatenate two files, that is append the contents of one file at the end of another file and write the results into a third file. You must be able to execute command at DOS prompt as follows:
C > CONCAT Source 1.txt source 2.txt Target.txt.*/
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int ch;
	FILE *file1,*file2,*tfile;
	if(argc!=5)						//Check if argument passed is valid
	{
		printf("Invalid number of arguments");
		printf("Valid arguments are: C>CONCAT Source_file1 Source_file2 Target_file\n");
		exit(1);
	}
	file1=fopen(argv[2],"r");				//Open Source_file1 in read mode
	if(file1==NULL)
	{
		printf("Source 1 could not be opened");
		exit(1);
	}
	file2=fopen(argv[3],"r");				//Open Source_file2 in read mode
	if(file2==NULL)
	{
		printf("Source 2 could not be opened");
		exit(1);
	}
	tfile=fopen(argv[4],"w");				//Open Target_file in write mode
	if(tfile==NULL)
	{
		printf("Target file could not be opened");
		exit(1);
	}
	while(1)						//Copy from Source_file1 to Target_file
	{
		ch=fgetc(file1);
		if(ch==EOF)
			break;
		fputc(ch,tfile);
	}
	fclose(file1);
	while(1)						//Copy from Source_file2 to Target_file
	{
		ch=fgetc(file2);
		if(ch==EOF)
			break;
		fputc(ch,tfile);
	}
	fclose(file2);
	fclose(tfile);
}
