//
// Created by Fabio-PC on 22/08/2020.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 14
#define TAMINT 11

char cpf[TAM] = "123.456.789-12";
//char cpf[TAM] = "101.171.639-96";
int cpfInt[TAMINT],soma1[9],soma2[10];
int  k, x, h, u, somaDig1, somaDig2, resto, primeiro;

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
    for(i=0; i < strlen(entrada); ++i){
        if(entrada[i]=='.' || entrada[i]=='-'){
            entrada[i] = ' ';
        }
    }
}

void castInt(char string[], int inteiros[]){
    int j,aux[1];
    for (j = 0; j < strlen(string); ++j) {
        aux[0] = string[j];
        inteiros[j] = (int) atoi(aux);
    }
}

int main(int argc, char**argv){

    printf("CPF de entrada foi: %s\n",cpf);
    removeDivicao(cpf);
    removeEspacos(cpf);
    castInt(cpf,cpfInt);

    for (k = 10, h = 0; k >= 2, h < 9; --k, ++h) {
        soma1[h] = (cpfInt[h] * k);
    }

    for (int l = 0; l < 9; ++l) {
        somaDig1 += soma1[l];
    }

    if (somaDig1 % 11 == 0 || somaDig1 % 11 == 1) {
        printf("deu %d\n",somaDig1 % 11);
        cpfInt[9] = 0;
    } else{
        resto = somaDig1 % 11;
        primeiro = 11 - resto;
        printf("%d",primeiro);
    }

    for (u = 11, x = 0; u >= 1, x < 10; --u, ++x) {
        //printf("%d\n",cpfInt[x]);
        soma2[x] = (cpfInt[x] * u);
    }


    for (int l = 0; l < 10; ++l) {
        somaDig2 += soma2[l];
    }

    printf("%d",somaDig2);

    return 0;
}
