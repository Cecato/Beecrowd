#include <stdio.h>

main(){

    int x;

    while(1){

        scanf("%i",&x);

        if(x == 2002){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }

    }
}
