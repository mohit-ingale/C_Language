#include <stdio.h>
int fact(int);
float series(void);
void main()
{
	printf("Addition of series is: %f\n",series());
}

int fact(int a)
{
	int fac=a;
	if(a==1)
		return a;
	else
		fac=fac*fact(--a);
	return fac;
}

float series(void)
{
	int i;
	float ans=0;
	for(i=1;i<=7;i++)
	{
		if(i%2==0)
			ans-=((float)i/fact(i));
		else
			ans+=((float)i/fact(i));
	}
	return ans;
}
