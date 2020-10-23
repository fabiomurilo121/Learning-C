//
// Created by Fabio-PC on 18/08/2020.
//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define TAM 10

int vetor[TAM]={31,42,3,12,4,7,4,3213,12,54}, entrada, k, i;

int ordena(int vetor[],int tam){
    int j,i,aux;
    for (i = 0; i < tam -1; ++i) {
        for (j = i+1; j < tam -1; ++j) {
            if (vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

/*
int randomico(const int vet[],int tam){
    int i;
    //printf("Gerando 10 valores aleatorios:\n\n");
    for (i = 0; i < tam; i++){
        *//* gerando valores aleatórios entre zero e 100 *//*
        //printf("%d ", rand() % 100);
        vet[i] = 1 + rand() % 100;
    }
}*/

int main(){
    printf("Entre com 20 numeros \n");
//    for (k = 0; k < TAM; ++k) {
//        scanf("%d",&entrada);
//        vetor[k] = entrada;
//
//    }
    ordena(vetor,TAM);
    int j;
    for (j = 0; j < TAM; ++j) {
        printf("%d\n",vetor[j]);
    }

    return 0;
}

