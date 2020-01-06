#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	int *x,*y;
	printf("enter value of a: ");
	scanf("%d",&a);
	printf("enter value of b: ");
	scanf("%d",&b);
	x=&a;
	y=&b;
	swap(x,y);
	printf("value of a is %d\n",a);
	printf("value of b is %d\n",b);	
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
