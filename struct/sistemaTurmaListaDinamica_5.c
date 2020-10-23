#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
//#include <afxres.h>

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
    char nome[40];
    FILE *fin, *fout;
    char str[215]; // 214 da struct maxima + \0

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
                //Sleep(1800);
                usleep(600000);
                break;
            case 2:
                printf ("\n--- Consultar Estudante ---\n\n");
                printf ("Qual posicao? ");
                scanf ("%d", &pos);
                est = getEstudante(turma, pos);
                imprimirEstudante(est);
                usleep(1000000);
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
                printf ("\n--- Exportar para arquivo CSV ---\n\n");
                printf ("Qual o nome do arquivo (sem espacos e com extensao)? ");
                scanf ("%s", nome);
                fout = fopen (nome, "w"); // abre para gravar arquivo texto no diretorio corrente
                if (fout == NULL) {
                    printf ("Nao foi possivel criar o arquivo de saida <%s>", nome);
                } else {
                    est = turma->ini; 
                    while (est != NULL){
                        fprintf (fout, "%s;\n", est->nome);  // ideia eh salvar: nome;n1;n2;\n
                        est = est->prox;
                    }
                    fclose (fout);
                }
                break;                  
            case 8:  
                printf ("\n--- Importar do arquivo CSV ---\n\n");
                printf ("Qual o nome do arquivo (sem espacos e com extensao)? ");
                scanf ("%s", nome);
                fin = fopen (nome, "r"); // abre para ler arquivo texto no diretorio corrente
                if (fin == NULL) {
                    printf ("Nao foi possivel abrir o arquivo de entrada <%s>\n", nome);
                } else { 
                    turma = criarFila(); // resetar a lista (ideal fazer uma funcao clear, com free de todas as structs
                    while (fgets (str, 215, fin) != NULL){
                        // falta separar str usando o divisor ';'  Foi salvo: nome;n1;n2;\n
                        // com a instrucao strtok para pegar as partes nome n1 n2
                        printf ("Importanto %s", str);  // str eh uma linha inteira, como nome e notas
                        strcpy (estudante.nome, str);
                        estudante.nome[strcspn(estudante.nome, "\n")] = 0; // apagar qdo usar strtok
                        // faltar atribuir as duas notas, fazendo conversao de string em float 
                        addEstudante (turma, estudante);
                    }
                    fclose (fin);
                }           
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
        printf ("Problema na alocacao de memoria para o novo estudante!\n");
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
        usleep(50000);
        return;
    }

    printf ("\n--- Turma ---\n\n");
    printf ("Total de estudantes: %d\n", turma->qtde);
    //1a. opcao: usando a qtde de elementos da lista para efetuar um loop for
    e = turma->ini; 
    for (i=0; i<turma->qtde; i++){
        imprimirEstudante(e);
        usleep(900000);
        e = e->prox;
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

void imprimirEstudante (tEstudante *e){

    if (e == NULL){
        printf ("Estudante inexistente!\n");
        usleep(1800000);
        return;
    }
    printf ("Nome: %s\n", e->nome);
    // mostrar notas e média


}
