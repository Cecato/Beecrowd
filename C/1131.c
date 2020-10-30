#include <stdio.h>

int main(){

    int golI, golG, n = 1, grenaisI = 0, grenaisG = 0, empates = 0, i = 0;

    while(1){

        scanf("%d%d", &golI, &golG);

        i++;

        if( golI > golG){
            grenaisI ++;
        }
        else if( golG > golI){
            grenaisG ++;
        }
        else{
            empates ++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);

        if( n == 1){
            continue;
        }
        else{
            break;
        }

    }

    printf("%i grenais\n",i);
    printf("Inter:%d\n",grenaisI);
    printf("Gremio:%d\n",grenaisG);
    printf("Empates:%d\n",empates);

    if( grenaisI > grenaisG ){
        printf("Inter venceu mais\n");
        }
    else if( grenaisG > grenaisI ){
        printf("Gremio venceu mais\n");
        }
    else{
        printf("Nao houve vencedor\n");
        }

    return 0;
}
