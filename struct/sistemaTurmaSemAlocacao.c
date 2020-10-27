#define TAM 40

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[200];
    float n1, n2;
} tEstudante;

// declaração
void imprimirTurma (tEstudante t[], int tam);
tEstudante lerEstudante();
void imprimirEstudante (tEstudante e);
void ordena_az(tEstudante s[], int tam);

int main() {
    tEstudante turma[TAM];
    int opcao;
    int pos = 0;

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
                // imprimir procurando por nome parte de nome
                // busca e impressao
                break;
            case 3:
                imprimirTurma (turma, pos);
                break;
            case 4:
                // pegar o selecao direta já feito e adaptar para ordenar A-Z
                // usar strncmp e funcao de troca
                ordena_az(turma,pos);
                break;                
            default:
                printf ("Opcao inexistente! Escolha entre <0>..<4>!");
                break;
        }  
    } while (opcao != 0);  
    return 0;
}

void lerTurma (tEstudante t[], int tam){
    int i;
    for (i=0; i<tam; i++){
        t[i] = lerEstudante();
    }
}

// definição
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
