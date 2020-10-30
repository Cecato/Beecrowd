#include <stdio.h>

int main(){

    int x, i, j=0;

    scanf("%i",&x);

    for( i = x; j<6; i++ ){

        if( i % 2 == 1 ){
                printf("%i\n",i);
                j++;
        }
    }
    return 0;
}
