//
// Created by Fabio-PC on 13/09/2020.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numVidas = 6, i;
char *palavras[] = {"Curitiba","Canada","Mexico","Peru","Franca"},entrada[30];
int tamPalavra = sizeof(palavras) / sizeof(palavras[0]);

int randint(int v1, int v2){
    int i, num;
    for (i = 0; i < 10; i++) {
        num = (rand() % (v1 - v2 + 1)) + v1;
    }
    return num;
}

char *insertToArray(const char *val, char *arr){
    strcpy(val, arr);
    return arr;
}

void pegaPalavra(){
    int x = randint(1,tamPalavra);
    //printf("%s",palavras[x]);
    char newArr[strlen(palavras[x]) + 1];
    insertToArray(palavras[x],newArr);
    printf("%s",newArr);

}

int main(){
    srand(time(NULL));
    //printf("BEM VINDO AO JOGO DA FORCA");
    pegaPalavra();

}