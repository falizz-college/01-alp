//F�bio Lu�s de Carvalho Terra 2321055
#include "stdio.h"
#include "locale.h"
int main(){
setlocale(LC_ALL, "Potuguese");
	int n1 = 9;
	int n2 = 2;
	printf("\n tamanho de %i+%i=%i", n1,n2,n1+n2);
	printf("\n tamanho de %i-%i=%i", n1,n2,n1-n2);
	printf("\n tamanho de %i*%i=%i", n1,n2,n1*n2);
	printf("\n tamanho de %i/%i=%i", n1,n2,n1/n2);
	printf("\n tamanho de %i%%%i=%i", n1,n2,n1%n2);

	return 0;
}
