#include<stdio.h>
#define FACT(x) {\
		for(i=1;i<=x;i++)\
			fact=fact*i;\
		}
void main()
{
	int i,fact=1,x;
	printf("Enter the number:");
	scanf("%d",&x);
	FACT(x);
	printf("Factorial:%d\n",fact);
}

