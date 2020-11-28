//
// Created by Fabio-PC on 19/11/2020.
//
#define False 0

#include <stdio.h>
#include <time.h>
#include <string.h>

int result;
char string[50] = "calendario";

int dias_no_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // quantidade de dias em um mes
char *meses[] ={"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

void determinabixesto(int ano){ // bixesto
    if (ano % 4 == False && ano % 100 != False || ano % 400 == False) {
        dias_no_mes[1] = 29;
    } else {
        dias_no_mes[1] = 28;
    }
}

void calendario(){
    time_t agora;
    struct tm * tempo;
    struct tm dia1;
    int d; // dia do mes
    int i;
    int ano, mes, diaMes;

    time(&agora);
    tempo = localtime(&agora);
    ano = tempo->tm_year;
    mes = tempo->tm_mon;
    determinabixesto(ano);
    diaMes = dias_no_mes[mes];

    dia1.tm_mday = 1;
    dia1.tm_mon = mes;
    dia1.tm_year = ano;
    dia1.tm_hour = 12;
    dia1.tm_min = 0;
    dia1.tm_sec= 0;
    mktime(&dia1);

    //printf("Hoje: %d de %s de %d. \n\n", tempo->tm_mday,
    //meses[mes], ano+1900);

    printf("%s de %d\n", meses[mes], ano + 1900);

    printf("  D  S  T  Q  Q  S  S\n");

    for (i = 0; i < dia1.tm_wday; ++i) {
        printf("   ");
    }

    for (d = 1; d <= diaMes; ++d) {
        printf("%3d", d);
        i++;
        if(i % 7 == 0){
            printf("\n");
        }
    }
}

int main(int argc, char * argv[]){
    result = strcmp(string, argv[1]);

    if (result == 0) {
        calendario();
    } else{
        printf("funcao invalida\n" );
    }

    return 0;
}