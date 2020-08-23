#include <stdio.h>

int main(){
    int imp = 1;
    int ls, i, j, soma;

    printf("Qual o limite superior: ");
    scanf("%d", &ls);

    for (i = 1; i <= ls; ++i) {
        printf("%d^3: ", i);
        soma = 0;
        for (j = 1; j <= i ; ++j) {
            printf("%d",imp);
            soma += imp;
            imp += 2;
        }
        printf("%d\n",soma);
    }


    return 0;
}