#include <stdio.h>

int main(){

    double valor;

    scanf("%lf",&valor);


    printf("VOLUME = %.3lf\n",(4.0/3.0)*3.14159*(valor*valor*valor));

    return 0;
}
