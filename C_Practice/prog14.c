#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int i=10;
	static int a=i;
	printf("a=%d i=%d",a,i);
	printf("arr=%d",*(&arr)+1);
}
