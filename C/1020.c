#include <stdio.h>
#include <math.h>

int main(){

    int x, ano = 0, mes = 0;

    scanf("%i",&x);


    while(x >364){
        ano ++;
        x -= 365;
    }
    while(x>29){
        mes++;
        x -= 30;
    }

    printf("%i ano(s)\n",ano);
    printf("%i mes(es)\n",mes);
    printf("%i dia(s)\n",x);

    return 0;
}
