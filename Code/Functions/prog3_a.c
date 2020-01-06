#include <stdio.h>
int a,b;
void swap(void);
void main()
{
	printf("enter value of a: ");
	scanf("%d", &a);
	printf("enter value of b: ");
	scanf("%d", &b);
	swap();
	printf("value of a is %d\n",a);
	printf("value of b is %d\n",b);
}

void swap(void)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
