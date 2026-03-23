//F�bio Lu�s de Carvalho Terra 2321055
#include <stdio.h>
int main(){
	//declara��o de variaveis
	int i; //contador de linha (quantas linhas s�o)
	int linha; //termos por linha
	int n; //tamanho da matriz
	
	//pergunta ao usuario
	printf("Tamanho da matriz:  ");
	scanf("%i", &n);
	
	//matriz nula
	for (i=0;i<n;i++){
		for(linha=0;linha<n;linha++){
			printf("0 ");
		}
		printf("\n");
	}
	
	//divisoria
	printf("\n\n\n");
	
	//matriz identidade
	for(i=0;i<n;i++){
		for(linha=0;linha<n;linha++){
			int ixj = i+linha;
			if (i==linha){
				printf("1 ");
			} 
			else {
				if (ixj==n-1){
				printf("1 ");
				}
				else {
				printf("0 ");
				}
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
