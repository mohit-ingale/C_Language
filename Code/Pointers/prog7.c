#include<stdio.h>
void main()
{
	int i=0,j=0,count=0;
	char *s[] = {"we will teach you how to","Move a mountain","Level a building","Erase the past","Make a million"};


	for(i=0;i<5;i++)
	{
		for(j=0;(*(*(s+i)+j));j++)
		{
			if(*(*(s+i)+j)=='e')
				count++;
		}
	}
	printf("Count of e: %d\n",count);
}
