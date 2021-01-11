#include <stdio.h>

int main(){

    int m, n, c, i, N = 0, C = 0;
    double x;

    while( scanf("%d", &m) != EOF ){

        for( i = 0; i < m; i++){

            scanf("%d %d", &n, &c);

            N = N + ( n * c );
            C += c;
        }

        x =  N  / ( C * 100.00);

        printf("%.4lf\n",x);

        N = 0;
        C = 0;

    }

    return 0;
}
