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
    int par, impar; // flags para indicar que encontrou par ou impar
    int aux;        // auxiliar

    esq = &m[0][0]; // primeiro
    dir = &m[3][3]; // segundo

    //printf("Valor 0,0: %d, valor 3,3: %d\n", m[0][0],m[3][3]);
    //printf("Endereco do 0,0: %p, endereco 3,3: %p\n",)
    par = impar = 0;
    do {
        //printf("Endereco %p - valor: %d\n", esq, *esq);
        //esq++;
        if (*esq % 2 != 0)
            impar = 1;  //flag True
        else esq++;

        if (*dir % 2 == 0)
            par = 1;    //flag True
        else dir--;

        if (impar && par) { // quando for True e True
            aux = *esq;
            *esq = *dir;
            *dir = aux;
            esq++;
            dir--;
        }
    }while (esq < dir);

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }

    // aumentar esquerda ate achar um impar
    //printf("Endereco %p - valor: %d\n", dir, *dir);
    //dir--;

    return 0;
}