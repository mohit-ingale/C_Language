#include<stdio.h>
#include<string.h>
void main()
{
int n,m=0,i,j,k;
int ch1;
char ch;
printf("enter the size of the square matrix\n");
scanf("%d",&n);
int a[n][n],b[n][n],c[n][n];


printf("enter first matrix\n");	//input matrix a
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
printf("enter second matrix\n");	//input matrix b	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
  
	//while(1)
	//{
		loop: printf("enter \'+\' for addition\nenter\'-\' for subtraction\nenter \'*\' for multiplication\nenter '0' to exit\n");
		scanf("%c",&ch);
		ch=getchar();
		//getchar();
		switch(ch)
		{
			case '+':
			{
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
						c[i][j]=a[i][j]+b[i][j];
			break;
			}
			case '-':
			{
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
						c[i][j]=a[i][j]-b[i][j];
			break;
			}
		 	case '*':
			{
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{	for(k=0;k<n;k++)
							{
								m=m+a[i][k]*b[k][j];
							}
						c[i][j]=m;
						m=0;
					}
			break;
			}
			case 'q':
			{
				goto end;
			}
			default : {
					printf("entered choice is not correct\n");
					goto loop;
				}
		}
		printf("output matrix \n");
				for(i=0;i<n;i++)
					{
						for(j=0;j<n;j++)
							printf("%d ",c[i][j]);
						printf("\n");
					}
		printf("\n");
	//}
end:printf("program terminated\n");	
}		
