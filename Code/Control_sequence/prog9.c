/*Generate the following pyramid of numbers using nested loops
    1
   212
  32123
 4321234
543212345
*/
#include<stdio.h>

void main()
{

	int i,j,k,l,n;

	printf("Enter size of pyramid:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n-i;j++)	//Loop for spaces
		{
			printf(" ");
		}
		for(k=i;k>0;k--)	//Loop for Descending
		{
			printf("%d",k);
		}
		for(l=2;l<=i;l++)	//Loop for ascending
		{
			printf("%d",l);
		}
		printf("\n");
	}

}
