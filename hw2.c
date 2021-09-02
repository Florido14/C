
#include <stdio.h>
int k,n,i,j,b;

int main(){
    printf("dame el numero");
    scanf("%d", &k);
    
    int count, n, prime;

    for ( i = 1 ; i <= k ; i++ ){
        prime = 1;
        count = 2;

        while ( count <= i / 2 && prime ){
            if ( i % count == 0 )
                prime = 0;

            count++;
        }

        if ( prime )
            printf( "%d \n", i );
    }
	
	for (j=7;j>=0;j--){
		b = k>>j;
		if (b&1){
			printf("1");
		}else {
			printf("0");
		}
        
	}	
    printf("\n");


   return 0;
}
	
	