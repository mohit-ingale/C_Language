#include<stdio.h>
#include<string.h>
void itoa(char[],int,int);
//int count(int);

void main()
{
	int n,c;
	char str[6];
	memset(str,'\0',sizeof(str));
	printf("Enter a number:");
	scanf("%d",&n);
	c=printf("%d",n);		//for getting count of digits
	//c=count(n);
	itoa(str,n,c);
	printf("\nString:%s\n",str);
}
/*for counting number of digits
int count(int n)
{
	int c=0;
	while(n>0)
	{
		n=n/10;
		c++;
	}
	return c;
}
*/
void itoa(char str[],int n,int c)
{
	if(c>0)
	{
		itoa(str,(n/10),--c);
	}
	str[c]='0'+(n%10);
}
