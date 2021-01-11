#include <stdio.h>

int main(){

    int n[20], i, aux = 19, j;

    for( i = 0; i < 20; i++){
        scanf("%d",&n[i]);
    }

    for( i = 0; i < 10; i++){

         j = n[i];
        n[i] = n[aux];
        n[aux] = j;

        aux --;

        printf("N[%d] = %d\n", i, n[i]);

    }

    for( i = 10; i < 20; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }




    return 0;
}
