//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//int main()
//{
//    //menu
//    int opcao;
//    inicio:
//    system("cls");
//    system("color 0F");
//    printf("1 - JOGAR \n2 - RANKINGS \n3 - CREDITOS \n4 - SAIR\n");
//    opcao = getch();
//    switch (opcao) {
//        case '1':
//            system("cls");
//            printf("GAME\n");
//            break;
//        case '2':
//            system("cls");
//            printf("Ranking\n");
//            break;
//        case '3':
//            system("cls");
//            printf("Creditos\n");
//            break;
//        case '4':
//            system("cls");
//            printf("voce pediu para sair, prencione qualquer tecla para continuar\n");
//            break;
//        default:
//            printf("voce deve escolher uma opcao valida\n");
//            printf("Precione qualquer tecla para voltar ao menu\n");
//            system("pause");
//            goto inicio;
//    }
//}

#define TAM 3

#include <stdio.h>

// definicicao do tipo construido struct identificada por sDados
struct sEstudante {  // contendo dois campos
    char nome[200];
    float n1, n2;
};

// criando um apelido para a struct
typedef struct sEstudante tEstudante;

// cabecalho das funções
void lerTurma (tEstudante t[], int tam);
void imprimirTurma (tEstudante t[], int tam);
tEstudante lerEstudante();
void imprimirEstudante (tEstudante e);

int main() {
    // declaracao da variavel
    tEstudante turma[TAM];
    lerTurma(turma, TAM);
    imprimirTurma (turma, TAM);

    // criar aqui um menu de opcoes

    return 0;
}

void lerTurma (tEstudante t[], int tam){
    int i;
    for (i=0; i<tam; i++){
        t[i] = lerEstudante();
    }
}

void imprimirTurma (tEstudante t[], int tam){
    int i;
    for (i=0; i<tam; i++){
        imprimirEstudante(t[i]);
    }
}

tEstudante lerEstudante(){
    tEstudante e;
    // ler estudante
    // setbuf (stdin, NULL); // limpa buffer do teclado
    return e;
}

void imprimirEstudante (tEstudante e){
    // imprimir o estudante com sua media aritmetica de notas
}