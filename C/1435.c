#include <stdio.h>

int main(){

    int n, i, j, aux;

    while(1){

        scanf("%d",&n);

        if( n == 0){
            break;
        }

        for( i = 1; i <= n; i++ ){

            for( j = 1; j <= n; j++){

                aux = i;

                if( aux > j){
                    aux = j;
                }

                if( aux > n - i + 1 ){
                    aux = n - i + 1;
                }
                if( aux > n - j + 1 ){
                    aux = n - j + 1;
                }

                printf("%3d",aux);

                if( n > j){
                    printf(" ");
                }
                else{
                    printf("\n");
                }

            }

        }
        printf("\n");

    }

    return 0;
}
