#include <stdio.h>
#define TAM 5

int main(){

    int par[TAM], impar[TAM], i, x, countP = 0, countI = 0;



    for( i = 0; i < 15; i++){

        scanf("%d",&x);

        if( x % 2 == 0){

            par[countP] = x;
            countP ++;

            if( countP > 4 ){

                for( countP = 0; countP < 5; countP++){

                    printf("par[%d] = %d\n", countP, par[countP]);

                }
                countP = 0;
            }
        }
        else{

            impar[countI] = x;
            countI ++;

            if( countI > 4 ){

                for( countI = 0; countI < 5; countI++){

                    printf("impar[%d] = %d\n", countI, impar[countI]);

                }
                countI = 0;
            }
        }
    }

   for( i = 0; countI > 0; i++){

        printf("impar[%d] = %d\n", i, impar[i]);
        countI --;

    }

    for( i = 0; countP > 0; i++){

        printf("par[%d] = %d\n", i, par[i]);
        countP --;

    }


    return 0;
}


