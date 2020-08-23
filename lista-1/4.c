//
// Created by Fabio-Note on 13/08/2020.
//
#include <stdio.h>
#include <string.h>

#define tam 10
int vetorA[tam],vetorPar[tam],vetorImpar[tam];
int i = 0, j = 0, h = 0, limpa = 0;

int main(int argc, char** argv) {
    printf("Digite 10 numeros inteiros positivos:\n");

    for (i = 0; i < tam; i++) {
        scanf("%d", &vetorA[i]);
        if (vetorA[i] >= 0){
            if (vetorA[i] % 2 == 0){
                vetorPar[h++] = vetorA[i];
            }
            else{
                vetorImpar[j++] = vetorA[i];
            }
        }else{
            printf("Digite um valor positivo\n");
            i--;

        }
    }
    printf("Entrada ");
    for (i = 0; i < tam; i++) {
        printf(" %d ", vetorA[i]);
    }

    for (i = 0; i < tam; i++) {
        vetorA[i] = limpa;
    }

    printf("\n");

    memcpy(vetorA,vetorPar,sizeof(vetorPar));
    memcpy(vetorA + (i - j),vetorImpar,sizeof(vetorImpar));

    printf("Ordenado ");
    for (i = 0; i < tam; i++) {
        printf(" %d ", vetorA[i]);
    }

    return 0;
}