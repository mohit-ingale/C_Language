#include<stdio.h>
#include<string.h>
char toUpper(char);
char toLower(char);
void main()
{
	char str[20];
	int i;
	printf("Enter a string:");
	gets(str);
	for(i=0;str[i];i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=toUpper(str[i]);
		else if(str[i]>='A'&&str[i]<='Z')
			str[i]=toLower(str[i]);
	}
	printf("Modified String:");
	puts(str);
}

char toLower(char ch)
{
	ch+=32;
	return ch;
}

char toUpper(char ch)
{
	ch-=32;
	return ch;	
}
