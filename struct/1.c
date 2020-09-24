//
// Created by Fabio-PC on 22/09/2020.
//

#include <stdio.h>

struct sDados { // contendo dois campos (nome, peso)
    char nome[200];
    float peso;
};

int main(){
    // declaracao da variavel
    struct sDados pessoa1 = {"Paulin",82.0};
    struct sDados pessoa2;
    struct sDados familia[4];

    printf("Entre com seu nome:");

    /* Ler os dados */
    scanf("%[^\n]", &pessoa2.nome);
    /* Limpar o buffer */
    scanf("%*[^\n]"); scanf("%*c");
    /* Voltar ao passo 1. */

    printf("Qual seu peso:");
    scanf("%f", &pessoa2.peso);
    printf ("%s (%.2f kg)",pessoa1.nome,pessoa1.peso);//parecido com classe
    printf("\n");
    printf ("%s (%.2f kg)",pessoa2.nome,pessoa2.peso);
    familia[0] = pessoa1;
    familia[1] = pessoa2;


    return 0;
}