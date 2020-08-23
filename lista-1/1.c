//
// Created by Fabio-PC on 11/08/2020.
//

#include <stdio.h>
#include <stdbool.h>

bool liga = true;
int lista[3];
int x, i = 0;
int verifica, limpa = 0;
float resultado = 0;

float mediaVetor(const int vet[], int tam){
    int media, soma = 0;
    int i;

    for(i =0; i<tam; i++){
        soma = soma + vet[i];
    }
    media = (soma/tam);

    return media;
}

int main(){
    while(liga){
        scanf("%d", &x);
        if(verifica == x){
            if(i >=3){
                liga = false;
                resultado = mediaVetor(lista, 3);
            }else{
                printf("%d\n",i);
                lista[i] = x + 1;
                lista[i-1] = x;
                lista[i-2] = x - 1;
                i = i + 1;
            }
        }else{
            for(i=0;i<2;i++){
                lista[i] = limpa;
            }
        }
        verifica = x + 1;
        printf("o numero de x eh %d \n", x);
    }
    for (int j = 0; j <= 2; ++j) {
        printf("%d\n",lista[j]);
    }
    printf("%lista-1",resultado);
    return 0;
}