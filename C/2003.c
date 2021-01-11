#include <stdio.h>

int main(){

    int h, m, x;

    while( scanf("%d:%d", &h, &m) != EOF ){

        x = (((8*60) - ( h*60 + m))*-1)+60;

        if( h == 7 ){
            printf("Atraso maximo: %d\n",m);
        }
        else if( h < 7 )
            printf("Atraso maximo: %d\n",0);
        else
            printf("Atraso maximo: %d\n",x);

    }



    return 0;
}
