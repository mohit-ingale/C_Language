#include<stdio.h>
int i=20;
int main(int argc, char const *argv[])
{
        int i=i;
        extern int j;

        int i=6;
        printf("i=%d\n",i);
        extern int j;
        printf("i=%d\n",i);
        /* code */
        return 0;
}
