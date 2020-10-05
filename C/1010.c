#include <stdio.h>

int main(){
    int cod, cod2, qtd, qtd2;
    double valor, valor2;

    scanf("%i %i %lf", &cod, &qtd, &valor);
    scanf("%i %i %lf", &cod2, &qtd2, &valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n",(qtd*valor)+(qtd2*valor2));

    return 0;
}
