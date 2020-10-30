#include <stdio.h>

int main(){

    int x, i, j = 1;

    scanf("%d",&x);

    for(i = 1; j <= x; i++){

        printf("%d %d %d PUM\n", i, i+1, i+2);

        i+=3;
        j++;
    }

    return 0;
}
