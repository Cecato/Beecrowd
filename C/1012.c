#include <stdio.h>

int main(){

    double valor, valor2, valor3;

    scanf("%lf %lf %lf",&valor,&valor2,&valor3);


    printf("TRIANGULO: %.3lf\n",(valor*valor3)/2);
    printf("CIRCULO: %.3lf\n",(3.14159*(valor3*valor3)));
    printf("TRAPEZIO: %.3lf\n",(valor3*(valor+valor2))/2);
    printf("QUADRADO: %.3lf\n",(valor2*valor2));
    printf("RETANGULO: %.3lf\n",(valor*valor2));

    return 0;
}
