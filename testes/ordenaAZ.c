//
// Created by Fabio-PC on 23/10/2020.
//

#include <stdio.h>
#include <mem.h>

int main(){

    char nm[3][20]= {"fabio","will","ana"}, aux[20];
    int i,j;
    for (i = 1; i < 3; i++) { /* 3 = qtde de palavras */
        for (j = 1; j < 3; j++) {
            // verifica se tem que ser depois, se for troca de posição
            if (strcmp(nm[j - 1], nm[j]) > 0) {
                strcpy(aux, nm[j - 1]);
                strcpy(nm[j - 1], nm[j]);
                strcpy(nm[j], aux);
            }
        }
    }

// só mostrar a matriz
    for (i = 0; i < 3; i++)
        printf("%s\n", nm[i]);

    return 0;
}