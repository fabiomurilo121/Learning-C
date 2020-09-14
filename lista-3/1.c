//
// Created by Fabio-PC on 10/09/2020.
//

#include <stdio.h>
int entrada,unid,deze,cent;

int main(){

    char *uni[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    char *dez[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    char *cen[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};

    scanf("%d",&entrada);

    if (entrada > 1 && entrada < 999){
        unid = entrada % 10;
        deze = entrada % 100;
        deze = deze/10;
        cent = (int) entrada/100;
    } else{
        printf("\nNumero invalido");
    }

    printf("%d\n",entrada);
    printf("Numero em Algorimos Romanos eh: %s%s%s",cen[cent],dez[deze],uni[unid]);

    return 0;
}