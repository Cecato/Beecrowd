#include <stdio.h>

int main(){

    int i = 1, j = 7, q = 0;

    for( ; i < 10 ;){
        q++ ;
        printf("I=%i J=%i\n", i, j);
        j-=1;
        if( q > 2){
            i += 2;
            q = 0;
            j += 5;
        }
    }

    return 0;

}





