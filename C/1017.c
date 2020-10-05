#include <stdio.h>

int main(){

    double tempo, distancia;

    scanf("%lf %lf",&tempo,&distancia);

    printf("%.3lf\n",(tempo*distancia)/12.0);

    return 0;
}
