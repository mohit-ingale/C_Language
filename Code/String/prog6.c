#include<stdio.h>
#include<string.h>
void delete(char[],char);
void main()
{
	char str[20],c;
	printf("Enter a string:");
	gets(str);
	printf("Enter the character to be deleted:");
	scanf("%c",&c);
	delete(str,c);
	printf("Modified string:");
	puts(str);
}

void delete(char str[],char c)
{
	int i=0,ct=0;
	while(str[i])
	{
		str[i]=str[i+ct];
		if(str[i]==c)
		{
			ct++;
			continue;
		}
		if(str[i])
			i++;
	}
	str[++i]='\0';
}
