#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],temp;
	int len,i,j;
	printf("Enter a string:");
	gets(str);
	len=strlen(str);
	printf("Rotations of string:\n");
	for(i=0;i<len;i++)
	{
		temp=str[0];
		for(j=0;j<len;j++)
			str[j]=str[j+1];
		str[len-1]=temp;		
		puts(str);
	}
}
