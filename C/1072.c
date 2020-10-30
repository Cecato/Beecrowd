#include <stdio.h>

int main(){

    int n, i, out = 0, in = 0, x;

    scanf("%i",&n);

    for( i = 0; i < n; i++){

        scanf("%i",&x);

        if(x<10 || x>20 ){
            out++;
        }
        else{
            in++;
        }
    }

    printf("%i in\n%i out\n",in,out);
    return 0;
}
