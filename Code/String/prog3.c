#include<stdio.h>
#include<string.h>
void main()
{
	int n,i,j;
	char str[10][20],temp[20];
	printf("Enter the number of strings:");
	scanf("%d",&n);
	getchar();
	printf("Enter the strings:");
	for(i=0;i<n;i++)
		gets(str[i]);
	
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(strcasecmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	printf("\nSorted Strings:\n");
	for(i=0;i<n;i++)
		puts(str[i]);
}		
