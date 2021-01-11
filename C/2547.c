#include <stdio.h>

int main(){

    int n, aMin, aMax, a, i, count;

    while( scanf("%d", &n) != EOF){

        scanf("%d %d", &aMin, &aMax);

        count = 0;

        for( i = 0; i < n; i++){

            scanf("%d", &a);

            if( a >= aMin && a <= aMax){
                count++;
            }

        }

        printf("%d\n",count);

    }

    return 0;
}
