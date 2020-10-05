#include <stdio.h>

int main(){
    double x,y,z;
    scanf("%lf %lf %lf", &x, &y, &z);
    x = ((x*2)+(y*3)+(z*5))/10.0;
    printf("MEDIA = %.1lf\n",x);

    return 0;
}
