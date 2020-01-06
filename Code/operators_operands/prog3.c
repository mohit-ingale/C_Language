#include<stdio.h>

void main()
{
	int a=0x00000001;
	char *ch;
	ch=(char*)&a;
	if(*ch==1)
		printf("system is little endian\n");
	else
		printf("system is big endian\n");
}
