#include <stdio.h>

typedef struct sLivro {
        int     lCodigo;       
        char    lTitulo[50];  
        int     lPaginas;      
        float   lPreco;      
} tLivro;

void mostrarLivro(tLivro livro) {
    printf ("\nCodigo: %d\n", livro.lCodigo);
    printf ("Titulo: %s\n", livro.lTitulo);
    printf ("Paginas: %d\n", livro.lPaginas);
    printf ("Preco: %.2f\n", livro.lPreco);
}

int main () {
	
	//---- Ler todos os registros do arquivo
    tLivro liv; // struct é o registro 
    FILE *fp;   // ponteiro para arquivo (file pointer) 
    
    // atualizar caminho
    char arqLivro[] = "livros.dat";  
    fp = fopen (arqLivro, "rb+"); // falta testar retorno NULL
    // fread devolve 1 quando leitura ok
    while (fread (&liv, sizeof(tLivro), 1, fp) == 1) {
    	  // enquanto leitura ok, continua
          mostrarLivro(liv);
    }
    fclose (fp);
    return 0;
}



