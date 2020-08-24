//
// Created by Fabio-PC on 22/08/2020.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 14
#define TAMINT 11

char aux[1], cpf[TAM] = "123.456.789-12";
int cpfInt[TAMINT],soma[9], j, k, i;

void removeEspacos(char* s) {
    const char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}

void removeDivicao(char entrada[]){
    int i;
    for(i=0; i< strlen(entrada); ++i){
        if(entrada[i]=='.' || entrada[i]=='-'){
            entrada[i] = ' ';
        }
    }
}

int main(int argc, char**argv){

    printf("CPF de entrada foi: %s\n",cpf);
    removeDivicao(cpf);
    removeEspacos(cpf);

    for (j = 0; j < strlen(cpf); ++j) {
        aux[0] = cpf[j];
        cpfInt[j] = (int) atoi(aux);
    }

    for (k = 10, i = 0; k >= 2, i <= 9; --k, ++i) {

        soma[i] = (cpfInt[i] * k);
    }

    for (int l = 0; l < 9; ++l) {
        printf("%d\n",soma[l]);
    }

    return 0;
}
