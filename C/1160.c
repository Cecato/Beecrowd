#include <stdio.h>

int main(){

    int t, anos = 0, i, pa, pb;
    double g1, g2;

    scanf("%d",&t);

    for( i = 0; i < t; i++){

        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while( pa <= pb){

            pa *= (g1/100.0)+1.0;
            pb *= (g2/100.0)+1.0;
            anos++;

            if(anos>100){
                printf("Mais de 1 seculo.\n");
                break;
            }

        }

        if(anos<=100){
            printf("%d anos.\n",anos);
        }

        anos = 0;

    }


    return 0;
}
