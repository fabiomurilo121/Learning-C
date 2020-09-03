//
// Created by Fabio-PC on 01/09/2020.
//

/*
Elabore um programa que preencha uma matriz quadrada (4x4) de numeros inteiros
sorteados entre 1..100 garantindo que nao havera nenhuma
repeticao (os 16 numeros devem ser unicos).
*/

#define  TAM   4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int m[TAM][TAM]; // matriz quadrada
    int *p, i, j;
    int achou;

    srand(time(NULL));
    // p = m    ou     p=&m[0]     ou     p=&m[0][0]  sao equivalentes
    p = m;  // p aponta para a primeira posicao da matriz

    for (i=0; i<TAM*TAM; i++) {
        *(p+i) = 1 + rand() % 20;     // numero de 1 a 20, como TAM esta com 4, precisara de 16 numeros unicos
        printf ("pos %d > Num: %d ", i, *(p+i)); // mostrar o numero que sorteou na iteracao i

        achou = 0;
        //for (j=i-1; j>=0; j--) {    // opcao para loop de verificacao decrescente
        for (j=0; j<i; j++){          // opcao para loop de verificacao crescente
            printf (" (%d)", *(p+j)); // mostrar qual antecedente esta analisando
            if (*(p+j) == *(p+i)){    // verifica se algun antecedente *(p+j) eh igual ao numero atual *(p+i)
                achou = 1;            // flag para indicar que achou repeticao
                j = i;                // otimizacao para sair da conferencia assim que achar o repetido
                printf ("<Rep ");     // sinalizar que houve repeticao
            }
        }
        printf ("\n");
        if (achou) {  // se achou repeticao
            i--;      // descontar 1 para sortear de novo a posicao i, pois havia repeticao
        }
    }
    printf ("Matriz sorteada: \n");
    for (i = 0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf ("%3d ", m[i][j]);
        }
        printf ("\n");
    }

    return 0;
}