#include <stdio.h>

int main(){

    int x, z, i, count= 0;

    scanf("%d %d", &x, &z);

    while(z <= x){
        scanf("%d",&z);
    }

    for(i = 0; i < z; x++){
        i+=x;
        count++;
    }

    printf("%d\n",count);

    return 0;
}
