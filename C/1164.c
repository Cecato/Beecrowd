#include <stdio.h>

int main(){

    int n, x, i, soma, aux, aux2;

    scanf("%d",&n);

    for( i = 0; i < n; i++){

        scanf("%d",&x);

        aux2 = x/2;
        soma = 0;

        for(aux = 1; aux <= aux2; aux++){
            if( x % aux == 0){
                soma += aux;
            }
        }

        if( x == soma){
            printf("%d eh perfeito\n",x);
        }
        else{
            printf("%d nao eh perfeito\n",x);
        }

    }

    return 0;
}
