//
// Created by Fabio-PC on 08/10/2020.
//

#include <stdio.h>
#include <string.h>

typedef struct sEstudante {
    char nome[200];
    float n1, n2;
    struct sEstudante *prox;
} tEstudante;

typedef struct {
    tEstudante *ini;
    tEstudante *fim;
    int qtde;
} tFila;

tFila *criarFila();

// funções para modificar
void imprimirTurma (tEstudante t[], int tam);
tEstudante lerEstudante();
void imprimirEstudante (tEstudante e);
// ---------

int main() {
    tFila *turma; // turma eh uma fila dinamica de estudantes
    int opcao;
    int pos = 0;

    turma = criarFila();
    if (turma == NULL) {
        printf ("Problema na alocacao de memoria da FILA!\n");
        exit (1);
    }

    do {
        printf ("\n--- Menu ---\n\n");
        printf ("0 - sair\n");
        printf ("1 - cadastrar um estudante\n");
        printf ("2 - imprimir estudante\n");
        printf ("3 - imprimir turma inteira\n");
        printf ("4 - ordenar alfabetica A-Z\n");
        printf ("\nQual sua opcao?");
        scanf ("%d", &opcao);
        switch (opcao) {
            case 0:
                printf ("Quantidade de elementos: %d\n", turma->qtde);
                exit(0);
                break;
            case 1:
                estudante = lerEstudante();
                addEstudante(turma, estudante);
                // 2 possibilidade: 1) é o primeiro ? 2)ou vai para o final da fila
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            default:
                printf ("Opcao inexistente! Escolha entre <0>..<4>!");
                break;
        }
    } while (opcao != 0);
    return 0;
}

tFila *criarFila(){
    tFila *fila;
    // alocacao dinâmica ha struct tFila
    fila = (tFila * ) malloc (sizeof(tFila));
    if (fila == NULL) // erro na alocacao, volta NULL
        return NULL;
    // passou, entao inicializar os campos da tFila
    fila->ini = NULL;
    fila->fim = NULL;
    fila->qtde = 0;
    return fila;
}

void imprimirTurma (tEstudante t[], int tam){
    int i;
    printf ("\n--- Turma ---\n\n");
    printf ("Total de estudantes: %d\n", tam);
    for (i=0; i<tam; i++){
        imprimirEstudante(t[i]);
    }
}

tEstudante lerEstudante(){
    tEstudante e;
    setbuf (stdin, NULL);
    printf ("\n--- Ler Estudante ---\n\n");
    printf ("Nome: ");
    fgets (e.nome, 200, stdin);
    e.nome[strcspn(e.nome, "\n")] = 0;
    // ler as notas
    return e;
}

void imprimirEstudante (tEstudante e){
    printf ("Nome: %s\n", e.nome);
    // mostrar notas e média
}