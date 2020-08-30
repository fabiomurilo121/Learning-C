#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

int main(){
    int m[TAM][TAM];
    int *p, i, aux = 0, tam = TAM*TAM, prox;

    srand(time(NULL));
    p = m;

    for (i=0; i< tam; i++) {
        *p = 1 + rand() % 34;
        printf ("%d ", *p);
        if (aux == *p){
            *p = 1 + rand() % 20;
            printf ("%d ", *p);
            p++;
        }
        aux = *p;
        p++;
    }

    return 0;
}