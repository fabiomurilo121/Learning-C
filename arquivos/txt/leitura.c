//
// Created by Fabio-PC on 22/10/2020.
//

//Leitura de arquivo
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *pont_arq;
    char texto_str[20];

    //abrindo o arquivo_frase em modo "somente leitura"
    pont_arq = fopen("arquivo.txt", "r");

    //enquanto não for fim de arquivo o looping será executado
    //e será impresso o texto
    while (fgets(texto_str, 20, pont_arq) != NULL)
        printf("%s", texto_str);

    //fechando o arquivo
    fclose(pont_arq);

    return (0);
}