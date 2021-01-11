#include <stdio.h>

int main(){

    int l, v, i, aux = 0;

    while(scanf("%d",&l) != EOF){

        for( i = 0; i < l; i++){

            scanf("%d", &v);

            if( v > aux){
                aux = v;
            }

        }

        if( aux < 10){
            printf("1\n");
        }
        else if( aux >= 20){
            printf("3\n");
        }
        else{
            printf("2\n");
        }

        aux = 0;

    }

    return 0;
}
