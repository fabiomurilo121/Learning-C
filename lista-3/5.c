//
// Created by Fabio-PC on 13/09/2020.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numVidas = 6, i;
char *palavras[] = {"Curitiba","Canada","Mexico","Peru","Franca"},entrada[30],recebe[40];
int tamPalavra = sizeof(palavras) / sizeof(palavras[0]);


int randint(int v1, int v2){
    int i, num;
    for (i = 0; i < 10; i++) {
        num = (rand() % (v1 - v2 + 1)) + v1;
    }
    return num;
}


void copiarString (char *stringOriginal, char *stringCopia){
    while (*stringOriginal != '\0'){
        *stringCopia = *stringOriginal;
        ++stringCopia;
        ++stringOriginal;
    }
    *stringCopia = '\0';
}


void pegaPalavra(){
    int x = randint(1,tamPalavra);
    //printf("%s",palavras[x]);
    copiarString(palavras[x],recebe);
    printf("%s",recebe);
}


int main(){
    srand(time(NULL));
    //printf("BEM VINDO AO JOGO DA FORCA");
    pegaPalavra();
}