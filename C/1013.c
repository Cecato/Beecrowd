#include <stdio.h>

int main(){

    int valor, valor2, valor3;

    scanf("%i %i %i",&valor,&valor2,&valor3);

    if(valor < valor2){
        valor = valor2;
    }
    if(valor < valor3){
        valor = valor3;
    }

    printf("%i eh o maior\n",valor);


    return 0;
}
