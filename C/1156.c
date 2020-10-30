#include <stdio.h>

int main(){

    double s = 0, i = 1, x, y = 1;

    while( y <= 39 ){
        x = y/i;
        s += x;
        i *= 2;
        y += 2;
    }

    printf("%.2lf\n",s);



    return 0;
}
