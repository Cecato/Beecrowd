#include <stdio.h>
#define TAM 100

int main(){

    int m = 1, M[TAM] [TAM], i, j, n, x, y;

    while(1){

        scanf("%d",&n);

        if( n == 0) break;

        for( i = 0; i < n; i++){

            x = 2;
            m = i + 1;

            for( j = 0; j <= i; j++, m--){

                M[i][j] = m;

            }

            for( j = i + 1; j < n; j++, x++){

                M[i][j] = x;

            }

            m++;

        }

        for( i = 0; i < n; i++){

            for( j = 0; j < n; j++){

                if( j == 0 ) printf("%3d", M[i][j]);

                else printf(" %3d", M[i][j]);

            }

            printf("\n");

        }

        printf("\n");

    }

    return 0;
}


