//
// Created by Fabio-PC on 08/10/2020.
//

#define TAM 10

#include <stdio.h>
#include <unistd.h>
#include <afxres.h>

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

void copiarString (char *stringOriginal, char *stringCopia){
    while (*stringOriginal != '\0'){
        *stringCopia = *stringOriginal;
        ++stringCopia;
        ++stringOriginal;
    }
    *stringCopia = '\0';
}

int main(){

    int cmp,i;
    char letra0[12],letra1[12];
    char *palavras[] = {"curitiba","vancouver","cidadedocabo","lima","paris",
                        "fortaleza","saopaulo","toronto","berlim","londres"};

    //for (i = 0; i < 10; ++i) {
        //printf("%s\n",palavras[i]);
        copiarString(palavras[1],letra0);
        copiarString(palavras[0],letra1);


        cmp = strcmp(letra0, letra1);
        if (cmp == 0){printf("1");} /* n1 igual a n2 */;

        if (cmp < 0){printf("2");} /* n1 menor que n2 */;

        if (cmp > 0){printf("3");} /* n1 maior que n2 */;


//    int vetor[TAM]={3,31,1,64,547,21,33,2183,42,98},i;
//    ordena(vetor,12);
//    for (i = 0; i <= TAM; ++i) {
//        printf("%d\n",vetor[i]);
//    }

}