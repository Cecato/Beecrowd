#include <stdio.h>
#define TAM 12

int main(){

    double m[TAM] [TAM], soma = 0;
    int i, j, aux = 1;
    char op;

    scanf("%c", &op);

    for( i = 0; i < TAM; i++){

        for( j = 0; j < TAM; j++){

            scanf("%lf", &m[i][j]);


        }

    }

     for( i = 1; i < TAM; i++){

        for( j = TAM-i; j < TAM ; j++){

            soma += m[i][j];

        }

        aux++;

    }


    if( op == 'S'){
        printf("%.1lf\n",soma);
    }
    else{
        printf("%.1lf\n",soma/66);
    }

    return 0;
}





