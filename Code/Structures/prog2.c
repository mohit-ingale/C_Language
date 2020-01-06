/*Define structure with two members (one int and other char). Also define s union with two members (one int and other char). Print the sizes of structure and union in number of bytes.*/
#include<stdio.h>
void main()
{
	struct struct1
	{
		int n1;
		char ch1;
	}s;
	union union1
	{
		int n2;
		char ch2;
	}u;
	printf("the size of structure is %lu\nthe size of union is %lu\n",sizeof(s),sizeof(u));
}
