#include <stdio.h>

int main(){

    char p[];
    int i;

    scanf(" %[a-z, !.@#$&*.`~A-Z]s", p);


    for( i = 0; p[i] != ','; i++){

        printf("%c",p[i]);
    }

    printf("%s",p);

    return 0;
}
