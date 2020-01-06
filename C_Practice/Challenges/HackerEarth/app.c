#include <stdio.h>
void StairCase(int n) {
int i,j;
    for(i=1;i<=n;i++)
        {
            for(j=i;j<=n-1;j++)
                printf(" ");
            for(j=0;j<i;j++)
                   printf("#");
                  printf("\n");
    }

}

int main() {
    int _n;
    scanf("%d", &_n);
    
    StairCase(_n);
    
    return 0;
}

