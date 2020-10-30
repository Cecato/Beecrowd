#include <stdio.h>

int main(){

    int n, i, x, total = 0;
    char t;
    int coelhos = 0, ratos = 0, sapos = 0;
    double coelhosA = 0.0, ratosA = 0.0, saposA = 0.0;
    double pCoelhos, pRatos, pSapos;

    scanf("%i",&n);



    for( i =0; i<n; i++){

        scanf("%i %c", &x, &t);

        total += x;

        switch(t){

            case'C': coelhos += x;
            coelhosA +=x; break;
            case'R': ratos += x;
            ratosA += x; break;
            case'S': sapos += x;
            saposA += x; break;
        }
    }


    pCoelhos = (coelhosA/total)*100;
    pRatos = (ratosA/total)*100;
    pSapos = (saposA/total)*100;

    printf("Total: %i cobaias\n"
           "Total de coelhos: %i\n"
           "Total de ratos: %i\n"
           "Total de sapos: %i\n", total, coelhos, ratos, sapos);
    printf("Percentual de coelhos: %.2lf %%\n"
           "Percentual de ratos: %.2lf %%\n"
           "Percentual de sapos: %.2lf %%\n", pCoelhos, pRatos, pSapos);

    return 0;
}
