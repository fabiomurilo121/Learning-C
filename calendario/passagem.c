#include <stdio.h>

int main( int argc, char *argv[] )  {

    printf("Program name %s\n", argv[0]);

    if( argc == 2 ) {
        printf("O argumento fornecido eh %s\n", argv[1]);
    }
    else if( argc > 2 ) {
        printf("Muitos argumentos fornecidos.\n");
    }
    else {
        printf("esperado um argumento\n");
    }
}