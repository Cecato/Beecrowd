#include <stdio.h>

int main(){

    int i = 1, j = 60;

    for( ; j > -1 ; i+=3 ){
        printf("I=%i J=%i\n", i, j);
        j-=5;
    }

    return 0;

}



