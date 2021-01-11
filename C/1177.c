#include <stdio.h>
#define TAM 1000

int main(){

    unsigned n[TAM];

    int x, i, j = 0;

    scanf("%d",&x);

    for( i = 0; i < TAM; i++){

        n[i] = j;
        j++;

        if( j == x){
            j = 0;
        }

        printf("N[%d] = %u\n", i, n[i]);

    }



    return 0;
}
