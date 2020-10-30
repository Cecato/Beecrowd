#include <stdio.h>

int main(){

    int x, y, soma = 0, j;


    while(1){
        scanf("%d %d", &x, &y);

        if(x <= 0 || y <= 0){
            break;
        }

        else{

            if(x > y){

                j = x;
                x = y;
                y = j;
            }

            for( ; x <= y ; x++){

                soma += x;
                printf("%d ",x);

            }

            printf("Sum=%d\n",soma);
            soma = 0;
        }
    }

    return 0;
}

