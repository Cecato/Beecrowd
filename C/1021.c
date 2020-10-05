#include <stdio.h>

int main(){

    double y;
    int x;

    scanf("%lf",&y);

    x = (int) y;
    int z = (y-x)*100;

    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n",x/100);
    x=x%100;
    printf("%i nota(s) de R$ 50.00\n",x/50);
    x=x%50;
    printf("%i nota(s) de R$ 20.00\n",x/20);
    x=x%20;
    printf("%i nota(s) de R$ 10.00\n",x/10);
    x=x%10;
    printf("%i nota(s) de R$ 5.00\n",x/5);
    x=x%5;
    printf("%i nota(s) de R$ 2.00\n",x/2);
    x=x%2;
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n",x/1);
    printf("%i moeda(s) de R$ 0.50\n",z/50);
    z=z%50;
    printf("%i moeda(s) de R$ 0.25\n",z/25);
    z=z%25;
    printf("%i moeda(s) de R$ 0.10\n",z/10);
    z=z%10;
    printf("%i moeda(s) de R$ 0.05\n",z/5);
    z=z%5;
    printf("%i moeda(s) de R$ 0.01\n",z/1);

    return 0;
}
