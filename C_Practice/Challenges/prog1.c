#include <stdio.h>
int main() {
	int arr[10][100],t,n=2,n1[10],i,j=0,k,count[10],num[2];
	printf("Enter t:");
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		printf("Enter n:");
		scanf("%d",&n1[k]);
	count[k]=(2*n1[k])+2;
	printf("enter %d numbers\n",count[k]);
	for(i=0;i<count[k];i++)
	    scanf("%d",&arr[k][i]);
	//k=0;
	}
	for(k=0;k<t;k++)
	{
		n=2;
	
	    i=0;
	while(n)
	{
	    for(;j<count[k];)
	       {
	           if(arr[k][i]==arr[k][j])
	           {
			if(i!=j)
			{
			       i++;
			       j=0;
			}
			else
				j++;
	           }
	           else
	           	j++;
	           
	       }
	       num[n-1]=arr[k][i++];
	       n--;
	       j=0;
	}
	if(num[0]<num[1])
		printf("num1=%d num2=%d\n",num[0],num[1]);
	if(num[0]>num[1])
		printf("num1=%d num2=%d\n",num[1],num[0]);
	}

	return 0;
}
