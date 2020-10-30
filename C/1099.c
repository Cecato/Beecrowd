#include <stdio.h>

int main(){

    int n, i = 0, j = 0, soma = 0;

    scanf("%i",&n);

    int x, y;

    for( ; i < n; i++){
        scanf("%i %i", &x, &y);

        if(x > y){
            j = x;
            x = y;
            y = j;
        }

        x++;

        for( ; x < y ; x++){
            if( x % 2 != 0){
                soma += x;
            }

        }

        printf("%i\n",soma);
        soma = 0;
    }


    return 0;
}
