#include <stdio.h>

main(){

    double x, y, i = 0;

    while(1){

        scanf("%lf", &x);

        if( x < 0 || x > 10){
            printf("nota invalida\n");
        }
        else if( i == 0){
            y = x;
            i++;
        }
        else{
            printf("media = %.2lf\n", (x+y)/2);
            break;
        }

    }

}
