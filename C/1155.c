#include <stdio.h>

int main(){

    double s = 0, i = 1, x;

    for( ; i<101; i++){
        x = 1/i;
        s += x;
    }

    printf("%.2lf\n",s);

    return 0;
}
