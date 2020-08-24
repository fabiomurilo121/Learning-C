//
// Created by Fabio-PC on 22/08/2020.
//

#include <stdio.h>
#include <stdlib.h>

#define TAM 14
char cpf[TAM] = "101.171.63996", str[1];
int cpfInt[TAM];
int i, j, k;


int main(){

    for (j = 0; j < TAM; ++j) {
        str[0] = cpf[j];
        if (str == '.' || str == '-') {
            cpf[j] = cpf[j+1];
        } else{
            cpfInt[j] = (int) atoi(str);
        }
    }

    for (int k = 0; k < TAM; ++k) {
        printf("numero %d\n", cpfInt[k]);
    }

    return 0;

}