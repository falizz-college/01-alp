#include <stdio.h>
#include <string.h>

int main (){
	
	//pedindo o nome das cidades
	char strcidade[20];
	char cidades [5][20];
	int i;
	
	for (i == 0 ; i < 5 ; i++){
		printf("\nDigite o nome da cidade %i: ", i);
		fgets (strcidade, sizeof(strcidade) ,stdin);
	}
	
	printf ("\n\n as cidades listadas foram: \n\n");
	
	for (i == 0 ; i < 5 ; i++){
		print ("%c\n", cidades [i][20]);
	}


	return 0;
}
