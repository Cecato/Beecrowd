#include <stdio.h>

int main(){

    int n, t, i, aux = 21, x;

    scanf("%d", &n);

    for( i = 1; i <= n; i++){

        scanf("%d", &t);

        if( aux > t ){

            aux = t;
            x = i;

        }

    }

    printf("%d\n",x);

    return 0;
}
