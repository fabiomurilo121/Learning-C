//
// Created by Fabio-PC on 18/08/2020.
//

#include <stdio.h>

int main(){
    int m[][4]={{1,4,5,7},
                {9,3,4,9},
                {8,6,1,8},
                {6,2,4,9}};

    int *esq, *dir;

    esq = &m[0][0]; // primeiro
    dir = &m[3][3]; // segundo

    //printf("Valor 0,0: %d, valor 3,3: %d\n", m[0][0],m[3][3]);
    //printf("Endereco do 0,0: %p, endereco 3,3: %p\n",)

    do {
        printf("Endereco %p - valor: %d\n", esq, *esq);
        esq++;
        // aumentar esquerda ate achar um impar

        printf("Endereco %p - valor: %d\n", dir, *dir);
        dir--;
        // diminuir ate achar um par

        //if achou um par e um impar
        //troca os dois de lugar

    }while (esq < dir);

    return 0;
}