//
// Created by Fabio-PC on 03/09/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int v1, int v2){
    int i, num;
    for (i = 0; i < 10; i++) {
        num = (rand() % (v1 - v2 + 1)) + v1;
    }
    printf("%d ",num);
    return num;
}

void sum(int *p,int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += *p;
        p++;
    }
    printf("\n");
    printf("%d",soma);
}

int main(){
    srand(time(NULL));

    int vetor[10];
    for (int i = 0; i < 10; ++i) {
        vetor[i] = randint(100,999);
    }

    sum(vetor,10);

}