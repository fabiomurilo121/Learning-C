#include <stdio.h>
#include <math.h>

int main(){
    float lista[10], listaD_absoluta[10], mediaAritmetica = 0, mediaAritmeticaD_absoluta = 0;
    int i, a;

    printf("Entre com 10 numeros reais: ");
    for(i = 0; i<10; i++){
        scanf("%lista-1", &lista[i]);
        mediaAritmetica += lista[i];
    }
    mediaAritmetica = mediaAritmetica/10;
    printf("Media Aritmetica = %lista-1\n", mediaAritmetica);
    for(a = 0; a<10; a++){
        listaD_absoluta[a] = fabs(lista[a] - mediaAritmetica); //fabs retorna o valor float absoluto
        mediaAritmeticaD_absoluta += listaD_absoluta[a];
        printf("%lista-1\n", listaD_absoluta[a]);
    }
    mediaAritmeticaD_absoluta = mediaAritmeticaD_absoluta/10;
    printf("Desvio Medio = %lista-1", mediaAritmeticaD_absoluta);
    return 0;
}