#include <stdio.h>
#include<string.h>
void toLower(char[]);

void main()
{
	char string1[100];
	printf("enter string: ");
	gets(string1);
	toLower(string1);
	puts(string1);
}

void toLower(char string[])
{
	int i=0;
	
	while(string[i])
	{
		if(string[i]>=65&&string[i]<=90)
		{
			string[i]+=32;
		}
		i++;
	}
	
	
}
