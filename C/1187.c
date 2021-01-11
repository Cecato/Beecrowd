#include <stdio.h>
#define TAM 12

int main(){

    double m[TAM] [TAM], soma = 0;
    int i, j;
    char op;

    scanf("%c", &op);

    for( i = 0; i < TAM; i++){

        for( j = 0; j < TAM; j++){

            scanf("%lf", &m[i][j]);


        }

    }

     for( i = 0; i < (TAM/2)-1; i++){

        for( j = i+1; j < TAM - (i+1); j++){

            soma += m[i][j];

        }

    }


    if( op == 'S'){
        printf("%.1lf\n",soma);
    }
    else{
        printf("%.1lf\n",soma/30);
    }

    return 0;
}






