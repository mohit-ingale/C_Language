/*Given as input a floating (real) number of centimeters, print out the equivalent number of feet (integer) and inches (floating, 1 decimal), with the inches given to an accuracy of one decimal place.*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	float cms,incs;
	int feet;
	printf("Enter length in cms: ");
	scanf("%f",&cms);
	incs=cms/2.54;
	feet=incs/12;
	incs=((incs/12)-feet)*12;
	printf("%.1f is %d feet and %.1f inches\n",cms,feet,incs);
	

}
