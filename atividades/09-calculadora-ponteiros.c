#include <stdio.h>
int main (){
	//declara��o das variaveis
	int n1;
	int n2;
	float resultado;
	int *p;
	
	p = &n1;
	printf("\n Digite o primeiro numero: 	");
	scanf("%i", p);
	resultado += *p;
	
	p = &n2;
	printf("\n Digite o segundo numero: 	");
	scanf("%i", p);
	resultado += *p;
	
	printf ("\n A media entre os valores digitados vale: %.1f", resultado/2);
	
	return 0;
}
