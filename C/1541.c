#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;

    while(scanf("%d",&a)){

        if( a == 0) break;

        scanf("%d %d", &b, &c);

        c = sqrt((a*b*100)/c);
        printf("%d\n", c);

    }

	return 0;
}
