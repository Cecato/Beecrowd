#include <stdio.h>
#include <math.h>

int main(){

    int n, i, x;

    scanf("%i",&n);

    for( i=1 ; i<=n ; i++ ){
        if(i%2==0){
            x=pow(i,2);
            printf("%i^2 = %i\n",i,x);
        }

    }

    return 0;
}
