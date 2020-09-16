//
// Created by fabio on 15/09/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *palavras[] = {"ola","tchau","bom-dia"};
char *recebeX[];
int tamPalavra = sizeof(palavras) / sizeof(palavras[0]);

int randint(int v1, int v2){
    int i, num;
    for (i = 0; i < tamPalavra; i++) {
        num = (rand() % (v1 - v2 + 1)) + v1;
    }
    return num;
}

int main (){
    srand(time(NULL));
    int x = randint(1,tamPalavra);
    *recebeX = palavras[x];
    printf("%s",recebeX);

    return 0;
}