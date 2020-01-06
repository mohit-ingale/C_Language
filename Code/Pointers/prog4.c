#include<stdio.h>
#include<stdlib.h>
void func(int *,int);
void main()
{
	int *p,n,i;
	printf("enter size of memory: ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));	
	printf("Enter %d Numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	func(p,n);

	printf("the entered numbers are : ");
	for(i=0;i<n;i++)
		printf("%d\t",*(p+i));
	printf("\n");
}

void func(int *ptr,int n)
{
	int i;
	printf("Enter %d new Numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
}
