#include <stdio.h>
#define VAL 32
  
int main()
{
    char arr[] = "geeksquiz";
    int a=6,b=4,c;
    *(arr + 0) &= ~VAL;
    *(arr + 5) &= ~VAL;
    printf("%s", arr);
    c=a&(~b);
    printf("c=%d\n",c);
    c=a|(^b);
    printf("c=%d\n",c);
     
    return 0;
}
