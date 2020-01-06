#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 Numbers\n");
	scanf("%d %d",&a,&b);
	printf("sum=%d\n",printf("%*c%*c",a,'\r',b,'\r'));
	return 0;
}
