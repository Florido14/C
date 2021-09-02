
#include <stdio.h>
int k;
int main()
{
    printf("dame el numero");
    scanf("%d", &k);
    
    int count, n, prime;

    for ( n = 1 ; n <= k ; n++ ){
        prime = 1;
        count = 2;

        while ( count <= n / 2 && prime )
        {
            if ( n % count == 0 )
                prime = 0;

            count++;
        }

        if ( prime )
            printf( "%d \n", n );
    }

   return 0;
}