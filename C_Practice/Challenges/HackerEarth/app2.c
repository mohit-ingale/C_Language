#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned long int i,len,*arr,ans=1;
	scanf("%ld",&len);
	arr=(long int *)malloc(sizeof(long int)*len);
	if(arr==NULL)
		exit(1);
	for(i=0;i<len;i++)
	{
		scanf("%ld",&arr[i]);
	//for(i=0;i<len;i++)
		ans=(ans*arr[i])%(1000000000+7);
	}
	printf("%ld",ans);
}
