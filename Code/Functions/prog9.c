#include <stdio.h>
void bin(int,int*);
void main()
{
	int dec,binn[16]={0},i,*k;
	printf("enter decimal number: ");
	scanf("%d",&dec);
	k=&binn[15];
	bin(dec,k);
	for(i=0;i<16;i++)
	{
		printf("%d",binn[i]);
	}
	printf("\n");
}

void bin(int dec,int *k)
{
	int num=dec;
	while(num)
	{
		*k=num%2;
		num=num/2;
		k--;
	}
}
