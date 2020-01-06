#include <stdio.h>

#define MAX_N 1000000
#define MAX_VAL 500000000
#define BITS_PER_VALUE (64)
#define SHIFT (6)
#define MASK (0x3F)

unsigned long long int presence[(MAX_VAL>>SHIFT)+1]={0};

int main() {
	//code
	int tests; scanf("%d",&tests);
	while(tests--) {
	    int n; scanf("%d",&n); n=(n+1)<<1;
	    for(int i=0;i<n;i++) {
	        int val; scanf("%d",&val);
	        presence[val>>SHIFT]^=(1LL<<(val&MASK));
	    }
	    int printed=0;
	    for(int i=0,iMax=(MAX_VAL>>SHIFT)+1;i<iMax && printed<2;i++) {
	        if(presence[i]!=0) {
	            unsigned long long int mask=1;
	            for(int b=0;b<BITS_PER_VALUE;b++) {
	                if(presence[i]&mask) {
	                    printf("%d ",(i<<SHIFT)+b);
	                    printed++;
	                    presence[i]^=mask;
	                }
	                mask<<=1;
	            }
	        }
	    }
	    printf("\n");
	}
	return 0;
}

