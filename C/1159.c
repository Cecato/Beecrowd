#include <stdio.h>

int main(){

    int x;

    while(1){

        scanf("%d",&x);

        if(x == 0){
            break;
        }
        else{
           if(x%2==0){
                x = (x)+(x+2)+(x+4)+(x+6)+(x+8);
                printf("%d\n",x);
           }
           else{
                x++;
                x = (x)+(x+2)+(x+4)+(x+6)+(x+8);
                printf("%d\n",x);
           }
        }
    }

    return 0;
}
