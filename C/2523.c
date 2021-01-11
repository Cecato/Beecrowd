#include <stdio.h>

int main(){

    char p[28];
    int i, n;

    while( scanf ( "%s", &p) != EOF ){

        scanf("%d",&n);

        int l[n];

        for( i = 0; i < n; i++){

            scanf("%d",&l[i]);
            printf("%c",p[l[i]-1]);

        }

        printf("\n");

    }

    return 0;

}

