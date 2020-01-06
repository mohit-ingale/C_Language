#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **p;
	p=(int*)malloc(sizeof(int));
	*p=(int*)malloc(sizeof(int));
	**p=5;
	printf("%d\n",**p);
}
