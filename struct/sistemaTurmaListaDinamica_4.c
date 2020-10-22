#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <afxres.h>

typedef struct sEstudante {  
    char nome[200];
    float n1, n2;
    struct sEstudante *prox;
} tEstudante;

typedef struct {
    tEstudante *ini;
    tEstudante *fim;
    int qtde;
} tLista;

// funcoes ok com nova abordagem 
tLista *criarFila();
int addEstudante (tLista *, tEstudante);
tEstudante *getEstudante (tLista *, int);
void imprimirTurma (tLista *);
tEstudante lerEstudante();
void imprimirEstudante (tEstudante *);
// ---------

int main() {
    tLista *turma; // turma eh uma lista dinamica de estudantes array-like
    tEstudante estudante;
    tEstudante *est;
    int opcao;
    int pos;

    turma = criarFila();
    if (turma == NULL) {
        printf ("Problema na alocacao de memoria da lista!\n");
        exit (1);
    }

    do {
        printf ("\n--- Menu ---\n\n");
        printf ("0 - sair\n");
        printf ("1 - cadastrar um estudante\n");
        printf ("2 - consultar estudante pelo indice\n");
        printf ("3 - consultar estudante pelo nome\n");
        printf ("4 - remover estudante pelo indice\n");        
        printf ("5 - imprimir turma inteira\n");
        printf ("6 - ordenar alfabetica A-Z\n");
        printf ("7 - exportar para arquivo CSV\n");
        printf ("8 - importar de arquivo CSV\n");
        printf ("\nQual sua opcao? ");    
        scanf ("%d", &opcao);
        switch (opcao) {
            case 0:
                exit(0);
                break;
            case 1:
                estudante = lerEstudante();
                if (addEstudante (turma, estudante) != 0){
                    printf ("Ocorreu um problema, %s nao pode ser adicionado\n", estudante.nome);
                } printf ("<%s> adicionado na lista!\n", estudante.nome);
                Sleep(1800);
                break;
            case 2:
                printf ("\n--- Consultar Estudante ---\n\n");
                printf ("Qual posicao? ");
                scanf ("%d", &pos);
                est = getEstudante(turma, pos);
                imprimirEstudante(est);
                break;
            case 3:               
                break;                            
            case 4:               
                break;                
            case 5:
                imprimirTurma(turma);                
                break;
            case 6:               
                break;                            
            case 7:               
                break;                  
            case 8:               
                break;                                  
            default:
                printf ("Opcao inexistente! Escolha entre <0>..<4>!");
                break;
        }  
    } while (opcao != 0);  
    return 0;
}

tLista *criarFila(){
    tLista *fila;
    // alocacao dinâmica ha struct tLista
    fila = (tLista *) malloc (sizeof(tLista));
    if (fila == NULL) // erro na alocacao, volta NULL
        return NULL;
    // passou, entao inicializar os campos da tLista
    fila->ini = NULL;
    fila->fim = NULL;
    fila->qtde = 0;
    return fila;
}

int addEstudante (tLista *turma, tEstudante estudante){
    tEstudante *e;
    // verificar se turma existe
    e = (tEstudante *) malloc (sizeof(struct sEstudante));
    if (e == NULL){
        printf ("Problema na alcoacao de memoria para o novo estudante!\n");
        Sleep(1800);
        return 1;
    }
    // passou daqui, entao inicializa os campos
    strcpy (e->nome, estudante.nome); 
    e->n1 = estudante.n1;
    e->n2 = estudante.n2;
    e->prox = NULL;    
    if (turma->ini == NULL) { // lista esta vazia, coloca e em primeiro
        turma->ini = e;
        turma->fim = e;
    } else {  // lista ja possui elementos, entra por ultimo
       turma->fim->prox = e;
       turma->fim = e;   
    }
    turma->qtde++;
    return 0;
}

tEstudante *getEstudante (tLista * turma, int pos){
    tEstudante *e;
    int i;
    // turma==NULL          lista nao foi criada
    // turma->qtde==0       lista existe mas esta vazia
    if (turma==NULL || turma->qtde==0){
        return NULL;
    }
    // pos<0                nao existe posicao negativa na lista, ef zero-based
    // pos>=turma->qtde     nao existe posicao alem da quantidade existente
    if (pos<0 || pos>=turma->qtde){
        return NULL;
    }
    // passou, entao procura o estudante da posicao pos
    e = turma->ini;  // endereco do primeiro estudante, posicao ZERO da lista
    i = 0;
    while (i < pos){
        e = e->prox; // pega o proximo estudante da lista
        i++;         // incrementa o indice ate achar a pos pedida  
    }
    return e;
}

void imprimirTurma (tLista  *turma){
    tEstudante *e;
    int i;

    // teste de NULL para a lista
    if (turma==NULL){
        printf ("Turma inexistente!\n");
        return;
    }

    printf ("\n--- Turma ---\n\n");
    printf ("Total de estudantes: %d\n", turma->qtde);
    //1a. opcao: usando a qtde de elementos da lista para efetuar um loop for
    e = turma->ini; 
    for (i=0; i<turma->qtde; i++){
        imprimirEstudante(e);
        e = e->prox;
    }
    // 2a. opcao: usando o fato de que o ultimo aponta para NULL
    /*
    e = turma->ini; 
    while (e != NULL){
        imprimirEstudante(e);
        e = e->prox;
    }
    */
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

void imprimirEstudante (tEstudante *e){

    if (e == NULL){
        printf ("Estudante inexistente!\n");
        Sleep(1800);
        return;
    }
    printf ("Nome: %s\n", e->nome);
    // mostrar notas e média

    Sleep(1800);
}
