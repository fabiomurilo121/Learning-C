#include <stdio.h>
#include <stdlib.h>

int main (int argC, char *argV[]) {
	// recebendo parametros na chamada do programa
	// argC : argument Count
	// argV : argumento Values
	
	int i;
	
	if (argC == 1) {
		// argV é sempre maior ou igual a 1.
		printf ("Nenhum parametro enviado para <%s>\n", argV[0]);
		// argV[0] sempre aponta para o nome do programa
	} else {
		printf ("Parametros passados para o programa <%s>\n", argV[0]) ;
		for (i=1; i<argC; i++) {
 			printf ("Parametro %d : %s\n", i, argV[i]) ;
 			// char *argV[]: é um ponteiro para um vetor de strings
 		}
  	}
  	printf("\n\n");
 		
 	return 0;
}


// calendario          calendario do mes corrente
// calendario m 10     calendario de outrubro do ano corrente
// calendario y 2004   calendario do ano inteiro
// mostrar na tela
D  S  T  Q   Q   S   S
         1  2  3  4   5 
........
29 30 
// BONUS (nota a mais), salva o calendario em arquivo txt
// calendario f cal.txt        
// calendario m 10 f cal.txt
// calendario y 2004 f cal.txt




