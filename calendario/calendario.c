//
// Created by Fabio-PC on 06/11/2020.
//
#define True 1
#define False 0

#include<stdio.h>

int dias_no_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // quantidade de dias em um mes
char *meses[] = {
                " ",
                "\n\nJaneiro",
                "\n\nFevereiro",
                "\n\nMarco",
                "\n\nAbril",
                "\n\nMaio",
                "\n\nJunho",
                "\n\nJulho",
                "\n\nAgosto",
                "\n\nSetembro",
                "\n\nOutubro",
                "\n\nNovembro",
                "\n\nDezembro"
        };

int entrada(void) {
    int ano;

    printf("Informe o ano do calendario desejado (exemplo: 1999) : ");
    scanf("%d", &ano);
    return ano;
}

int determinacodedia(int ano){ // retorna um numero X
    int diacode;
    int d1, d2, d3;

    d1 = (ano - 1.0) / 4.0;
    d2 = (ano - 1.0) / 100.;
    d3 = (ano - 1.0) / 400.;
    diacode = (ano + d1 - d2 + d3) % 7;
    return diacode;
}

int determinabixesto(int ano) // bixesto
{
    if (ano % 4 == False && ano % 100 != False || ano % 400 == False) {
        dias_no_mes[2] = 29;
        return True;
    } else {
        dias_no_mes[2] = 28;
        return False;
    }
}

void calendario(int diacode) {

    int mes, dia;
    for (mes = 1; mes <= 12; mes++) {
        printf("%s", meses[mes]);
        printf("\n\nDom  Seg  Ter  qua  qui  sex  sab\n");

        // Corrija a posição para a primeira data
        for (dia = 1; dia <= 1 + diacode * 5; dia++) {
            printf(" ");
        }

        // Imprima todas as datas de um mês
        for (dia = 1; dia <= dias_no_mes[mes]; dia++) {
            printf("%2d", dia);

            // É dia antes do sábado? Caso contrário, comece a próxima linha, Domingo.
            if ((dia + diacode) % 7 > 0)
                printf("   ");
            else
                printf("\n ");
        }
        // coloca a posição para o proximo mes
        diacode = (diacode + dias_no_mes[mes]) % 7;
    }
}

int main() {
    int ano, diacode;

    ano = entrada();
    diacode = determinacodedia(ano);
    determinabixesto(ano);
    calendario(diacode);
    printf("\n");
}