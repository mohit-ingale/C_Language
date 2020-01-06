//Given as input an integer number of seconds, print as output the equivalent time in hours,minutes and seconds.
#include<stdio.h>

void main()
{
	int sec1,sec2,hrs,min;
	printf("Enter seconds:");
	scanf("%d",&sec1);
	min=sec1/60;
	hrs=min/60;
	sec2=sec1%60;
	min=min%60;
	printf("%d seconds is eqivalent to %d hours %d minutes %d seconds\n",sec1,hrs,min,sec2);
}
