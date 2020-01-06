#include<stdio.h>
#include<string.h>
void expand(char[],char[]);
void main()
{
	
	char s1[20],s2[50];
	printf("Enter string: ");
	gets(s1);
	expand(s1,s2);
	printf("Expanded string:");
	puts(s2);
}

void expand(char s1[],char s2[])
{
	int i=0,j=0,n;
	while(s1[i])
	{
		if(s1[i]=='-')
		{
		n=1;
			while(s2[j-1]!=s1[i+1])
			{
				s2[j]=s1[i-1]+n;
				n++;
				j++;
			}
		i+=2;
		}
		s2[j]=s1[i];
		i++;
		j++;
	}
	s2[j]='\0';
}
