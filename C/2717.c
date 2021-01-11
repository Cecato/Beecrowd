#include <stdio.h>

int main(){

    int n , x, y;

    scanf("%d", &n);
    scanf("%d %d", &x, &y);

    if( x + y <= n ){
        printf("Farei hoje!\n");
    }
    else
        printf("Deixa para amanha!\n");

    return 0;
}
