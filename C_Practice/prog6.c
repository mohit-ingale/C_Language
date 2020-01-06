#include<stdio.h>
int main(int argc, char const *argv[])
{
        int i;
        extern int j;
        printf("i=%d\n",i);
        printf("j=%d\n",j);
        /* code */
        return 0;
}
int j=90;
