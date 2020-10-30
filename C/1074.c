#include <stdio.h>

int main(){

    int n, x, i;

    scanf("%i",&n);

    for( i = 0; i < n; i++){
        scanf("%i",&x);

        if( x == 0){
            printf("NULL\n");
        }
        else if( x % 2 == 0 ){
            printf("EVEN ");
        }
        else{
            printf("ODD ");
        }

        if( x < 0){
            printf("NEGATIVE\n");
        }
        else if( x > 0){
            printf("POSITIVE\n");
        }
    }

    return 0;
}
