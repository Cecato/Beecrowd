#include <stdio.h>

int main(){

    int valor;
    double valor2;

    scanf("%i %lf",&valor,&valor2);

    printf("%.3lf km/l\n",(valor/valor2));


    return 0;
}
