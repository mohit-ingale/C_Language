//Write a program to print ASCII values of upper case and lower case alphabets and digits(A-Z, a-z and 0-9).
#include <stdio.h>
void main()
{
	char ch;
	while(1)
	{
	printf("enter character: ");
	scanf("%c",&ch);
	getchar();
	printf("ascii value of %c is %d\n",ch,ch);
	}
}
