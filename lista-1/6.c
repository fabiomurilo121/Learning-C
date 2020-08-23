//
// Created by Fabio-Note on 14/08/2020.
//

#include <stdio.h>
#include <stdbool.h>
#define TAM 10

int vetor[TAM],vetorFreq[TAM], entrada, j, k;
bool acho;

int main(){
    printf("Entre com um valor entre 1 e 5\n");
    k = 0;
    for (int i = 0; i < TAM; ++i) {
        scanf("%d",&entrada);
        if (entrada >= 1 && entrada <= 5){
            acho = false;
            j = 1;
            while (!acho && j <= k){
                if (vetor[j] == entrada){
                    acho = true;
                    vetorFreq[j] = vetorFreq[j] + 1;
                }
                else{
                    j = j + 1;
                }
            }
            if (!acho){
                k++;
                vetor[k] = entrada;
                vetorFreq[k] = 1;
            }
        }
        else {
            printf("Informe um valor correto !!!\n");
            i--;
        }
    }

/*    for (int i = 0; i < TAM; ++i) {
        printf(" %d ", vetor[i]);
    }*/

    printf("   Vetor   Frequencia\n");
    for (j = 1; j <= k; j++)
    {
        printf("%6.1d", vetor[j]);
        printf("%7d\n", vetorFreq[j]);
    }
}

