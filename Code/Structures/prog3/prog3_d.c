/*Define a structure declaration for each of the following situations. Assume a 16-bit
integer word
d) Define three bit fields, called a, b and c, whose widths are 8 bits, 6 bits and 5 bits, respectively.*/
#include<stdio.h>

void main()
{
	struct var
	{
		int a:8;
		int b:6;
		int c:5;
	};
	struct var v;
	printf("Size of structure:%lu\n",sizeof(v));
}

