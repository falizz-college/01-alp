//F�bio Lu�s de Carvalho Terra 2321055
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//gerador de n�meros aleat�rios
	
    srand(time(NULL));
    
    //declarar matrizes
    
    int matrizTime1[10][10];
    int matrizTime2[10][10];
    
    //declarar times
    
    char* times [10] = {"Angola", "Etiopia", "Mexico", "Brasil", "China", "India", "Portugal", "Servia", "Fiji", "Samoa"};

    printf("              Angola  Etiopia  Mexico  Brasil  China  India  Portugal  Servia   Fiji   Samoa\n");
	
	//impress�o das matrizes
	
	int i;
	int j;
		
		// colocar um limite no placar
		
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
                matrizTime1[i][j] = rand() % 10;
                matrizTime2[i][j] = rand() % 10;
        }
    } 
    
    	// montar a tabela
    	
    for (i = 0; i < 10; i++) {
        printf("%-8s     |", times[i]);
        for (j = 0; j < 10; j++) {
            if (i == j) {
            	//divis�ria da matriz identidade
                printf("   -   |");
                //matriz triangular e placares
            } else if (j <= i) { 
				printf("  %d-%d  |", matrizTime1[i][j], matrizTime2[i][j]);
            } else {
            	printf("   -   |");
            }
        }
        printf("\n");
    }

    return 0;
}
