#include <stdio.h>
void prime(int,int);
void main()
{
	int a,b;
	printf("enter lower limit:");
	scanf("%d",&a);
	printf("enter upper limit:");
	scanf("%d",&b);
	prime(a,b);
	printf("\n");

}

void prime(int a, int b)
{
	int j;
	loop: while(a<b)	//main loop
		{
			for(j=2;j<a;j++)		//for checking divisibilty
			{	
				if(a%j==0)
					{
					a++;		//if no is not prime it will increment i
					goto loop;	//and jump to while
					}
			}
			printf("%d ",a);
			a++;
		}
}
