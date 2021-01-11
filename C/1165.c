#include <stdio.h>
#include <math.h>

int primo(int x);

int main(){

    int x, n, i;

    scanf("%d",&n);

    for( i = 0; i < n; i++){

        scanf("%d",&x);

        if( primo(x) == 1){
            printf("%d eh primo\n", x);
        }
        else{
            printf("%d nao eh primo\n", x);
        }
    }

    return 0;
}

int primo(int x){

    int i, y;

    y = sqrt(x);

    if(x==2){
        return 1;
    }
    else if( x < 2 || x % 2 == 0){
        return 0;
    }

    for( i = 3; i <= y; i += 2){

        if( x % i == 0){
            return 0;
        }

    }

    return 1;

}
