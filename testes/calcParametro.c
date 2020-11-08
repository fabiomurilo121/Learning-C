//
// Created by Fabio-PC on 08/11/2020.
//

#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("\t\tCalculadora do curso C Progressivo\n\n");

    printf("Operacoes disponiveis\n");
    printf("'+' : soma\n");
    printf("'-' : subtracao\n");
    printf("'*' : multiplicao\n");
    printf("'/' : divisao\n");
    printf("'%' : resto da divisao\n");

    printf("\nDigite a expressao na forma: numero1 operador numero2\n");
    printf("Exemplos: 1 + 1 , 2.1 * 3.1\n");
    printf("Para sair digite: 0 0 0\n");
}


void soma(float a, float b)
{
    printf("%.2f\n",a+b);
}

void subtracao(float a, float b)
{
    printf("%.2f\n",a-b);
}

void multiplicacao(float a, float b)
{
    printf("%.2f\n",a*b);
}

void divisao(float a, float b)
{
    if( b != 0)
        printf("%.2f\n",a/b);
    else
        printf("Nao pode dividor por zero\n");
}

void modulo(int a, int b)
{
    printf("%d\n", a%b);
}

void calculadora(float a, float b, char operador)
{
    system("cls || clear");

    printf("Calculando: %.2f %c %.2f = ", a,operador,b);

    switch( operador )
    {
        case '+':
            soma(a, b);
            break;

        case '-':
            subtracao(a, b);
            break;

        case '*':
            multiplicacao(a, b);
            break;

        case '/':
            divisao(a, b);
            break;

        case '%':
            modulo((int)a, (int)b);
            break;

        default:
            if(a != 0 && operador != '0' && b != 0)
                printf(" Operador invalido\n\n ");
            else
                printf(" Fechando calculadora!\n ");
    }
}

int main()
{
    float num1,
            num2;
    char oper;

    do
    {
        menu();

        scanf("%f", &num1);
        scanf(" %c",&oper);
        scanf("%f", &num2);

        calculadora(num1, num2, oper);
    }
    while(num1 != 0 && oper != '0' && num2 != 0);

}