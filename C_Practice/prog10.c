#include<stdio.h>
int main()
{
	char ch;
	ch='A';
	printf("then ch=%c\n",ch>='A'&&ch<='Z'?ch+'a'-'A':ch);
	printf("now ch=%c\n",ch>='A'&&ch<='Z'?ch:ch+'a'-'A');
	
}
