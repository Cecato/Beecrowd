#include <stdio.h>

int main(){

    int x, y, i, j = 1;

    scanf("%d %d", &x, &y);

    for( i = 1; i <= y; i++){

        printf("%d ", i);

        j++;

        if(i == y){
            printf("%d\n",i);
        }
        else if( j == x){

            i++;
            printf("%d\n",i);
            j = 1;
        }

    }

    return 0;
}
