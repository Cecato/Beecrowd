#include <stdio.h>

int main(){

    int x, y, i, soma=0;

    scanf("%i %i", &x, &y);
    for(i=y+1; i<x; i++){
        if(i%2!=0){
            soma = soma + i;
        }
    }

    printf("%i\n",soma);

    return 0;

}

