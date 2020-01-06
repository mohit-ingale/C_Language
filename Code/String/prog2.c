#include<stdio.h>
#include<string.h>
void strrev(char[],int,int);
void main()
{
	char str[20];
	int n;
	printf("Enter a string:");
	gets(str);
	n=strlen(str);
	strrev(str,n-1,0);
	printf("Reversed string:");
	puts(str);
}

void strrev(char str[],int n,int i)
{
	char temp;
	if(n-i==2)
	{
		temp=str[n];
		str[n]=str[i];
		str[i]=temp;
		return;
	}
	else if(n-i==1)
	{
		temp=str[n];
		str[n]=str[i];
		str[i]=temp;
		return;
	}
	else
	{
		temp=str[n];
		str[n]=str[i];
		str[i]=temp;
		strrev(str,--n,++i);
	}		
}
