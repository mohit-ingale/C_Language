#include<stdio.h>
int main()
{
	union he{
		int i;
		char s[2];
	};
	union he u;
	u.s[0]=0;
	u.s[1]=2;
	u.s[1]=0;
	u.s[1]=0;
	printf("%d\n",u.i);
	return 0;
}
