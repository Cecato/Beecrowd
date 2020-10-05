#include <stdio.h>

int main(){

    int x;

    scanf("%i",&x);

    printf("%i:%i:%i\n",(x/60)/60,(x%3600)/60,(x%3600)%60);



    return 0;
}
