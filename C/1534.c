#include <stdio.h>

int main(){

    int n, i, j, aux;

    while( scanf("%d",&n) != EOF ){

        int m [n] [n];

        for( i = 0; i < n; i++){

            for( j = 0; j < n; j++){

                m [i] [j] = 3;
            }

        }

        for( i = 0; i < n; i++){

            m [i] [i] = 1;

        }


        for( i = 0, j = n -1; i < n; i++, j--){

            m [i] [j] = 2;

        }

        for( i = 0; i < n; i++){

            for( j = 0; j < n; j++){

                printf("%d",m[i][j]);
            }

            printf("\n");

        }


    }

    return 0;
}
