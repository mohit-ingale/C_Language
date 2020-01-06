/*Develop a C program to calculate simple interest using the formula I=PTR/100. Display Interest with two digit precision after decimal point*/
#include <stdio.h>
void main()
{
	float p,r,i,t;
	printf("\nenter principal amount: ");
	scanf("%f",&p);
	printf("enter term in year: ");
	scanf("%f",&t);
	printf("enter rate of interest: ");
	scanf("%f",&r);
	i=(p*r*t)/100;
	printf("\nInterest amount is: %.2f\n",i);
}
