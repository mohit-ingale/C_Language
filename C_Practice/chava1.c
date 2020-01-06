#include<stdio.h>
int main()
{
	static int arr[]={0,1,2,3,4};
	//int p1[][];
	int *p[]={arr,arr+1,arr+2,arr+3,arr+4};
	int **ptr=p;
	printf("size is %d\n",sizeof(p));
	printf("size is %d\n",sizeof(arr));
	printf("xu=%ld\t %ld\n",p,(p+1));
	printf("p=%ld,*p=%ld,arr=%ld,*ptr=%ld,ptr=%ld\n",p,*p,arr,*ptr,ptr);
	ptr++;
		printf("p=%ld,*p=%ld,arr=%ld,*ptr=%ld,ptr=%ld\n",p,*p,arr,*ptr,ptr);
		printf("sub=%d\n",(arr+2)-(arr));
	printf("%d %d %d\n",ptr-p,*ptr-arr,**ptr);
	*ptr++;
	printf("%d %d %d\n",ptr-p,*ptr-arr,**ptr);
	*++ptr;
	printf("%d %d %d\n",ptr-p,*ptr-arr,**ptr);
	++*ptr;
	printf("%d %d %d\n",ptr-p,*ptr-arr,**ptr);
	return 0;
}
