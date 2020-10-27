//
// Created by Fabio-PC on 27/10/2020.
//

#define TAM 3

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[200];
    float n1, n2;
} tEstudante;

// definicoes das funcoes abaixo
tEstudante lerEstudante(){
    tEstudante e;
    setbuf (stdin, NULL); //limpar buffer do teclado
    printf ("\n--- Ler Estudante ---\n\n");
    printf ("Nome: ");
    fgets (e.nome, 200, stdin);
    e.nome[strcspn(e.nome, "\n")] = 0; //remove espaco do nome
    // ler as notas
    printf ("Nota 1: ");
    scanf("%f",&e.n1);
    printf ("Nota 2: ");
    scanf("%f",&e.n2);

    return e;
}

void lerTurma (tEstudante t[], int tam){
    int i;
    for (i=0; i<tam; i++){
        t[i] = lerEstudante();
    }
}

void imprimirEstudanteAA (tEstudante e){
    printf ("Nome: %s\n", e.nome);
    // mostrar notas e média
}

void imprimirTurma (tEstudante t[], int tam){
    int i;
    printf ("\n--- Turma ---\n\n");
    printf ("Total de estudantes: %d\n", tam);
    for (i=0; i<tam; i++){
        imprimirEstudanteAA(t[i]);
    }
}

void imprimirEstudante (tEstudante e[], int tam, char name[200]){
    int i, imprimiu = 0;
    float media;
    for (i=0; i<tam; i++){
        if(strcmp(e[i].nome, name) == 0){
            printf ("Nome: %s\n", e[i].nome);
            printf ("Nota 1: %f\n", e[i].n1);
            printf ("Nota 2: %f\n", e[i].n2);
            media = (e[i].n1+e[i].n2)/2;
            printf ("Media: %f\n",media);
            imprimiu = 1;
        }
    }
    if(imprimiu == 0){
        printf("Estudante nao cadastrado...");
    }
}

void ordena_az(tEstudante s[], int tam){
    int i, j, n = tam;
    tEstudante t;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(s[i].nome, s[j].nome) > 0) {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    printf("Em Ordem Alfabetica\n");

    for (i = 0; i < tam; i++) {
        printf("Nome: %s\n", s[i].nome);
    }
}

int main() {
    tEstudante turma[TAM];
    int opcao;
    int pos = 0;
    char name[200];

    do {
        printf ("\n--- Menu ---\n\n");
        printf ("0 - sair\n");
        printf ("1 - cadastrar um estudante\n");
        printf ("2 - imprimir estudante\n");
        printf ("3 - imprimir turma inteira\n");
        printf ("4 - ordenar alfabetica A-Z\n");
        printf ("\nQual sua opcao? ");
        scanf ("%d", &opcao);
        switch (opcao) {
            case 0:
                exit(0);
                break;
            case 1:
                if (pos<TAM) {
                    turma[pos] = lerEstudante();
                    pos++;
                } else {
                    printf ("A lista esta cheia!\n");
                }
                break;
            case 2:
                if(pos>0){
                    printf("Digite o nome do estudante que deseja procurar: \n");
                    scanf(" %[^\n]", name);
                    scanf("%*[^\n]"); scanf("%*c");
                    imprimirEstudante(turma,pos,name);
                }else{
                    printf("Desculpe, nao ha cadastro de nenhum estudante.");
                }
                break;
            case 3:
                imprimirTurma (turma, pos);
                break;
            case 4:
                ordena_az(turma,pos);
                break;
            default:
                printf ("Opcao inexistente! Escolha entre <0>..<4>!");
                break;
        }
    } while (opcao != 0);
    return 0;
}
