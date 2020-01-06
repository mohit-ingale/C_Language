
#include<stdio.h>
#define FLAG 5						
void main()
{
	int i=10,j=30;
	#if FLAG==1					
		i=i+20;
		j=j-20;
		printf("i=%d\tj=%d\n",i,j);		
	#elif FLAG==2					
		i=i+10;
		j=j+10;
		printf("i=%d\tj=%d\n",i,j);
	#elif FLAG==5					
		i=i*10;
		j=j*10;
		printf("i=%d\tj=%d\n",i,j);
	#endif
	#ifndef FLAG					
		i=i/10;
		j=j/10;
		printf("i=%d\tj=%d\n",i,j);
	#endif
	#ifdef FLAG					
		i=i+5;
		j=j+5;
		printf("i=%d\tj=%d\n",i,j);
	#endif
}
