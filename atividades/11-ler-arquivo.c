//F�bio Lu�s de Carvalho Terra 2321055

#include <stdio.h>
#include <string.h>

int main (void){
	FILE *entrada;
	char texto[100];
	char caracteres[sizeof texto];
	
	// caso o arquivo exista
	
		// lendo o arquivo de entrada
		
	entrada = fopen ("entrada.txt", "r");
	if (entrada != NULL){
		printf ("\n\n Entrada.txt encontrado com sucesso! \n\n");
		fgets (texto, sizeof(texto), entrada);
		fclose (entrada);
	} else {
		
		// caso o arquivo n�o exista
			
		printf ("\n\n O arquivo n�o existe!\n");
		return -1;
	}
	
	strcpy (caracteres, texto);
	
	// criando o arquivo de saida
	
	FILE *saida;
	printf ("\n Criando arquivo saida.txt...");
	saida = fopen ("saida.txt", "w");
		// fazendo um loop para copiar cada caractere da string
		// e transformar em minusculo caso necess�rio
		
	int i = 0;
	while ( caracteres[i] != '\0' ){
		if ( caracteres[i] >= 'A' && caracteres[i] <= 'Z' ) {
			caracteres[i] = caracteres[i] + 32;
		}
		i++;
	}
	
	//copiando o conte�do alterado para o arquivo de saida
	
	fprintf (saida, "%s", caracteres);
	
	fclose (saida);
		
	printf ("\n Arquivo saida.txt criado com sucesso! \n\n");
	
return 0;
}
