#include <stdio.h>

int main(){

    int x, i, pos, maior = 0;

    for( i = 1; i < 101; i++){

        scanf("%i",&x);

        if(x > maior){
            maior = x;
            pos = i;
        }
    }

    printf("%i\n%i\n", maior, pos);

    return 0;
}
