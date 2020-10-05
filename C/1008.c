#include <stdio.h>

int main(){
    int cod;
    double sal, bonus;

    scanf("%i %lf %lf", &cod, &sal, &bonus);

    printf("NUMBER = %i\nSALARY = U$ %.2lf\n",cod,sal*bonus);

    return 0;
}
