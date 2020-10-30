#include <stdio.h>

int main(){

    int n, i;
    double x, y, z;

    scanf("%i",&n);

    for( i = 0; i < n; i++){

        scanf("%lf %lf %lf", &x, &y, &z);

        x = ((x*2)+(y*3)+(z*5))/10;

        printf("%.1lf\n",x);

    }

    return 0;
}
