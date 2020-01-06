#include<stdio.h>
#include<string.h>
void deletes2(char[],char[]);
void main()
{
	char s1[20],s2[20];
	printf("Enter a string:");
	gets(s1);
	printf("Enter second string:");
	gets(s2);
	deletes2(s1,s2);
	printf("Modified string:");
	puts(s1);
}

void deletes2(char s1[],char s2[])
{
	int i=0,j=0,ct=0;
	while(s1[i])
	{
		for(j=0;s2[j];j++)
		{
			if(s1[i]==s2[j])
			{
				ct++;
				i--;
				break;
			}
			
		}
		if(s1[i])
			i++;
		s1[i]=s1[i+ct];
	}
	s1[++i]='\0';
}
