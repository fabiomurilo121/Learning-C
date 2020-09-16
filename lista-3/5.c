//
// Created by Fabio-PC on 13/09/2020.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int numVidas = 6, i = 0, j;
char *palavras[] = {"Curitiba","Canada","Mexico","Peru","Franca"},entrada[30],recebe[40],letra;
int tamPalavra = sizeof(palavras) / sizeof(palavras[0]);
bool ligado = true;

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
    copiarString(palavras[randint(1,tamPalavra)],recebe);
}

bool verificaLetra(char entrada){
    bool veri = false;
    for (j = 0; j < strlen(recebe); ++j) {
        if (entrada == recebe[j]){
            veri = true;
        }
    }
    return veri;
}

int main(){
    srand(time(NULL));
    printf("BEM VINDO AO JOGO DA FORCA\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
    printf("   ______     _____     ______    _______        __       \n");
    printf("  | _____|   |     |   |      |  |  ____|      //  \\     \n");
    printf("  | |_____   |     |   |______|  | |          //    \\    \n");
    printf("  | |____|   |     |   | |\\      | |         //_____ \\   \n");
    printf("  | |        |     |   | | \\     | |_____   //        \\  \n");
    printf("  |_|        |_____|   |_|  \\    |______|  //          \\ \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
    pegaPalavra();
    printf("A palavra da forca tem: %d letras\n",strlen(recebe));
    printf("\nEntre com uma letra:");
    while (ligado){
        //letra = getchar();
        letra = getc(stdin);
        if (numVidas >= 0){
            if (verificaLetra(letra)){
                printf("\nEntre com uma letra:");
            }else{
                entrada[i] = letra;
                i++;
            }
        }else{
            printf("Game Over");
            ligado = false;
        }
    }
}