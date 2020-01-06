/*Define a structure declaration for each of the following situations. Assume a 16-bit
integer word
a) Define three bit fields, called a, b and c, whose widths are 6-bits, 4-bits and 6-bits, respectively.
b) Declare a structure-type variable v having the composition defined in part (a) above. Assign initial values 3, 5 and 7 respectively, to the three bit fields.*/
#include<stdio.h>

void main()
{
	struct var
	{
		int a:6;
		int b:4;
		int c:6;
	};
	
	struct var v;
	v.a=3;
	v.b=5;
	v.c=7;

	printf("%d %d %d\n",v.a,v.b,v.c);
} 
