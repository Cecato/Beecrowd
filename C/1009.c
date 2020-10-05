#include <stdio.h>

int main(){
    char cod;
    double sal, bonus;

    scanf("%s %lf %lf", &cod, &sal, &bonus);

    printf("TOTAL = R$ %.2lf\n",sal+bonus*0.15);

    return 0;
}
