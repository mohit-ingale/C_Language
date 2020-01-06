#include<stdio.h>
#include<string.h>
void expand(char[],char[]);
void main()
{
	char s[20],t[20];
	printf("enter 1st string\n");
	scanf("%[^'$']s",s);
	expand(s,t);
	printf("string s: ");
	puts(s);
	printf("\nstring t: ");
	puts(t);
	//printf("\n");
	
}

void expand(char s[],char t[])
{
	int i=0,j=0;
	
	while(s[i])
	{
		switch(s[i])
		{
			case '\t':
				t[j]='\\';
				t[++j]='t';
				break;
			case '\n':
				t[j]='\\';
				t[++j]='n';
				break;
			default:
				t[j]=s[i];
		}
		i++;
		j++;
	}
	t[j]='\0';
}
