#include <stdio.h>
#define TAM 61

int main(){

    long long fib[TAM];
    int i, t, x;

    fib[0] = 0;
    fib[1] = 1;

    for( i = 2; i < TAM; i++){

        fib[i] = fib[i-1]+fib[i-2];

    }

    scanf("%d",&t);


    for(i = 0; i < t; i++){
        scanf("%d",&x);

        printf("Fib(%d) = %lld\n", x, fib[x]);
    }


    return 0;
}
