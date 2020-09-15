//
// Created by Fabio-PC on 13/09/2020.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *palavras[] = {"Curitiba","Canada","Mexico","Peru","Franca"},*escolha[],*entrada[];
int numVidas,i;
int tamPalavra = sizeof(palavras) / sizeof(palavras[0]);

int randint(int v1, int v2){
    int i, num;
    for (i = 0; i < 10; i++) {
        num = (rand() % (v1 - v2 + 1)) + v1;
    }
    return num;
}

int criaCopia(){

    int x = randint(1,tamPalavra);
    int i, count = 0;
    for(i = 0; palavras[i] != '\0' ; i++) {
        count++;
    }

    for(i = 0; i < count; i++) {
        //printf("\n%c", word[i]);
        escolha[i] = palavras[i];
    }

    return x;
}


int main(){
    srand(time(NULL));
    //printf("BEM VINDO AO JOGO DA FORCA");
    //printf("%s",palavras[criaCopia()]);
    for (i = 0; i < 3; ++i) {
        printf("%c",escolha[i]);
    }


}