/*Develop a program to generate marks sheet of C-DAC, Hyderabad Students (DSSD, DESD and DAC courses). Modules are different for each course. Implement this using structures, unions, arrays, loops and variables.*/
#include<stdio.h>
void main()
{
	struct student
	{
		char name[20];
		int rlno;
		char course[4];
		struct marks
		{
			int mod1,mod2,mod3,mod4,mod5;
		}mrks;
	}stu[5];
	int i,ch;
	for(i=0;i<5;i++)
	{
		printf("Enter details of student %d:\n",i+1);
		printf("Enter name:");
		gets(stu[i].name);
		printf("Enter Roll no:");
		scanf("%d",&stu[i].rlno);
		printf("Enter course('DESD,DSSD or DAC in CAPS only'):");
		scanf("%s",stu[i].course);
		printf("Enter marks for Module 1:");
		scanf("%d",&stu[i].mrks.mod1);
		printf("Enter marks for Module 2:");
		scanf("%d",&stu[i].mrks.mod2);
		printf("Enter marks for Module 3:");
		scanf("%d",&stu[i].mrks.mod3);
		printf("Enter marks for Module 4:");
		scanf("%d",&stu[i].mrks.mod4);
		printf("Enter marks for Module 5:");
		scanf("%d",&stu[i].mrks.mod5);
	}
	printf("\nDetails of students:\n");
	for(i=0;i<5;i++)
	{
		printf("Details of student %d:\n",i+1);
		printf("name:");
		puts(stu[i].name);
		printf("Roll no:%d",stu[i].rlno);
		printf("Course:%s",stu[i].course);
		printf("Marks for Module 1:%d",stu[i].mrks.mod1);
		printf("Marks for Module 2:%d",stu[i].mrks.mod2);
		printf("Marks for Module 3:%d",stu[i].mrks.mod3);
		printf("Marks for Module 4:%d",stu[i].mrks.mod4);
		printf("Marks for Module 5:%d",stu[i].mrks.mod5);
	}
}
