#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int n,i,j;
	printf("enter number of strings: ");
	scanf("%d",&n);
	getchar();
	char *arr[20];
	for(i=0;i<n;i++)
	{
		arr[i]=(char*)calloc(20,sizeof(char));
		if(arr[i]==NULL)
		printf("space not allocated\n");
		exit(1);
	}

	printf("enter %d strings\n",n);
	for(i=0;i<n;i++)
		gets(*(arr+i));
	printf("Entered strings are:\n");
	for(i=0;i<n;i++)
		puts(*(arr+i));
}
