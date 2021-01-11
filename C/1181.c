#include <stdio.h>
#define TAM 12

int main(){

    double m[TAM] [TAM], soma = 0;
    int l, i , j;
    char op;

    scanf("%d %c", &l, &op);

    for( i = 0; i < TAM; i++){

        for( j = 0; j < TAM; j++){

            scanf("%lf", &m[i][j]);

            if(l == i){
                 soma += m[l][j];
            }

        }
    }

    if( op == 'S'){
        printf("%.1lf\n",soma);
    }
    else{
        printf("%.1lf\n",soma/12);
    }

    return 0;
}

