#include <stdio.h>

int main(){

    int n, i, total = 1;

    scanf("%d",&n);

    for( i = 0; i-n != 0; i++ ){
        total = total*(n-i);
    }

    printf("%d\n",total);

    return 0;
}
