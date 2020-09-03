#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

int main(){
    int m[TAM][TAM];
    int *p, i, aux, tam = TAM*TAM;

    srand(time(NULL));
    p = m;

    for (int j = 0; j < tam; ++j) {
        *p = 1 + rand() % 100;
        printf("%d",*p);

        for (int k = j; k >= 0; ++k) {
            printf("%d",*(p-1));
        }
        p++;
    }

/*    for (i=0; i< tam; i++) {
        *p = 1 + rand() % 34;
        printf ("%3d ", *p);
        p++;
    }*/

    return 0;
}