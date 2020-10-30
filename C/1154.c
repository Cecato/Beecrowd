#include <stdio.h>

int main(){

    int i = 0;
    double n, aux = 0;

    while(1){

        scanf("%lf",&n);

        if(n<0){
            break;
        }
        else{
            aux += n;
            i++;
        }

    }

    printf("%.2lf\n",aux/i);
    return 0;
}
