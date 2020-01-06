#include<stdio.h>
void test(char[]);
void main()
{
	char str[5]={'a','b','c','d','e'};
	int i;
	printf("the array contains following alphabets: ");
	/*for(i=0;i<5;i++)
		printf("%c",*(str++));
	printf("\n");*/
	test(str);
}

void test(char x[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%c",*x++);
	}
	printf("\n");
}
