#include <stdio.h>

int main(){

    int x = 0, y = 1, i, aux = 0, n, aux2 = 0;

    scanf("%d",&n);

    if(n == 1){
        printf("%d\n", x);
    }
    else if(n == 2){
        printf("%d %d\n", x, y);
    }
    else{
        printf("%d %d ", x, y);

        for( i = 2; i < n; i++){

            aux = x + y;
            aux2 = y;
            x = aux2;
            y = aux;

            if( i >= n - 1){
                printf("%d\n",aux);
                break;
            }
            else{
                printf("%d ",aux);
            }

        }
    }
    return 0;
}
