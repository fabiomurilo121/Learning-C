//
// Created by Fabio-PC on 22/08/2020.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 14

char aux[1], cpf[TAM] = "101.171.639-96";
int i, cpfInt[11];

void removeEspacos(char* s) {
    const char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}

void removeDivicao(char entrada[]){
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


    for (int j = 0; j < strlen(cpf); ++j) {
        aux[0] = cpf[j];
        cpfInt[j] = (int) atoi(aux);
    }

    for (int j = 0; j < strlen(cpf); ++j) {
        printf("%d",cpfInt[j]);
    }

    return 0;
}
