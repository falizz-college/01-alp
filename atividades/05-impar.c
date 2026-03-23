//F�bio Lu�s de Carvalho Terra 2321055

#include <stdio.h>

int main (){
//declara��o de variaveis	
	int valores[10];
	int contador;
	int contador_impar;
//instru��o para o usuario
	printf("digite 10 numeros inteiros positivos \n");	
	contador_impar=0;
//loop
	for (contador=0; contador<10; contador++) {	
		printf("\n\n numero %i: \n", contador+1);
		scanf("%i", &valores[contador]);
//an�lise para descobrir se o numero � impar para incluir no contador
		if (valores[contador] % 2 != 0){
			contador_impar++;
		}
		if (valores[contador]<0){
			printf("\n por favor digite apenas numeros positivos ");
			contador--;
		}
	}
//resposta ao usuario
	printf("foram informados %i numeros impares", contador_impar);
	return 0;
}
