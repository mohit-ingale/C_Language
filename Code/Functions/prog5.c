#include<stdio.h>
#include<string.h>
int indexr(char[],char);
void main()
{
	char s[15],t;
	int indexx;
	printf("enter string:");
	gets(s);
	printf("enter character to search: ");
	t=getchar();
	getchar();
	indexx=indexr(s,t);
	printf("the rightmost position of '%c' in string is at %d position\n",t,indexx);
}

int indexr(char s[],char t)
{
	int i,inde=0;
	char ch;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==t)
		{
			inde=i+1;
		}		
	}
	if(inde==0)
	inde=-1;
	return inde;
}
