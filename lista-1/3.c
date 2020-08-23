//
// Created by Fabio-Note on 13/08/2020.
//

#include <stdio.h>

#define tam 10
int vetor[tam] = {20,10,90,65,34,28,98,47,82,11};
int i, j, aux;
float result;

int main(int argc, char** argv){
    //system ("COLOR A0");
    for( i=0; i<tam; i++ ){
        for( j=i+1; j<10; j++ ){
            if( vetor[i] > vetor[j] ){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    printf("Ordenado com sucesso!\n");
    for(i=0;i<=tam-1;i++){
        printf("%d\n",vetor[i]);
    }

    result = (float)(vetor[tam-1]-vetor[0]);
    printf("Menor valor ehh: %d\n", vetor[0]);
    printf("Maior valor ehh: %d\n", vetor[tam-1]);
    printf("Valor da aplitude amostral ehh: %d - %d = %.2f\n",vetor[tam-1],vetor[0],result);

    return 0;
}
