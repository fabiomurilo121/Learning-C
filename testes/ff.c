//
// Created by Fabio-PC on 29/09/2020.
//

#include <stdio.h>

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    troca(4,3);
}