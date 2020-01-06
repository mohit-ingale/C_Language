#include<stdio.h>
#include<stdlib.h>

int replace(char*);
void main()
{
	int i,n;
	char s[]="The cat sat";
	char *cat=s;
	n=replace(cat);
	printf("String: %s\nnumber of spaces replaced : %d\n",s,n);
}

int replace(char *cat)
{
	int n=0;
	while(*cat)
	{
		if(*cat==' ')
		{
			*cat='-';
			n++;
		}
		cat++;
	}
	return n;
}
