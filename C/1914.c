#include <stdio.h>

int main(){

    char a[200], b[200], aS[10], bS[10];
    int qt, i;
    long long int n, m;


    scanf("%d", &qt);

    for( i = 0; i < qt; i++){

        scanf("%s %s %s %s", &a, &aS, &b, &bS);
        scanf("%lld %lld", &n, &m);

        if( (n + m) % 2 == 0 ){

            if( strcmp (aS, "PAR") == 0){
                printf("%s\n",a);
            }
            else{
                printf("%s\n",b);
            }

        }
        else{

            if( strcmp (aS, "PAR") != 0){
                printf("%s\n",a);
            }
            else{
                printf("%s\n",b);
            }

        }

    }



    return 0;
}
