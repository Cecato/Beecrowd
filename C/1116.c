#include <stdio.h>

main(){

    int i, n;
    double x, y;

    scanf("%i",&n);

    for( i = 0; i < n; i++){

        scanf("%lf %lf", &x, &y);

        if( y == 0){
            printf("divisao impossivel\n");
        }
        else{
             x = x/y;
             printf("%.1lf\n",x);
        }

    }

}
