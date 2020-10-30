#include <stdio.h>

int main(){

    int x, i = 1;

    while(1){

        scanf("%d",&x);

        if( x == 0){
            break;
        }
        else{


            for(; i < x; i++){
                printf("%d ", i);
            }
            i = 1;
            printf("%d\n",x);

        }

    }

    return 0;
}
