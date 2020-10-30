#include <stdio.h>

int main(){

    int n, x, y, soma = 0, i, j;

    scanf("%d",&n);

    for( i = 0; i < n; i++){
        scanf("%d %d", &x, &y);

        for( j = 0; j < y; ){
            if( x % 2 != 0){
                soma += x;
                j++;
            }

            x ++;
        }

        printf("%d\n",soma);

        soma = 0;
        j = 0;
    }

    return 0;
}
