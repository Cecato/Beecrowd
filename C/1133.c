#include <stdio.h>

int main(){

    int x, y, aux;

    scanf("%d %d", &x, &y);

    if( x > y){

        aux = x;
        x = y;
        y = aux;
    }

    x++;

    for( ; x < y; x++){

        if(x % 5 == 2 || x % 5 == 3 ){
            printf("%d\n",x);
        }

    }

    return 0;
}
