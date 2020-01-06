/* 
This is a program to demonstrate use of
conditional compilation
*/
#include<stdio.h>
#define FLAG 5						//Define a Macro FLAG
void main()
{
	int i=10,j=30;
	#if FLAG==1					//Code considered only if FLAG==1
		i=i+20;
		j=j-20;
		printf("i=%d\tj=%d\n",i,j);		
	#elif FLAG==2					//Code considered only if FLAG==2
		i=i+10;
		j=j+10;
		printf("i=%d\tj=%d\n",i,j);
	#elif FLAG==5					//Code considered only if FLAG==5
		i=i*10;
		j=j*10;
		printf("i=%d\tj=%d\n",i,j);
	#endif
	#ifndef FLAG					//Code considered if Macro FLAG is not defined
		i=i/10;
		j=j/10;
		printf("i=%d\tj=%d\n",i,j);
	#endif
	#ifdef FLAG					//Code considered if Macro FLAG is defined
		i=i+5;
		j=j+5;
		printf("i=%d\tj=%d\n",i,j);
	#endif
}
