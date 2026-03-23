//F�bio Lu�s de Carvalho Terra 2321055
#include "stdio.h"
int main (){
	int intb = sizeof(int);
	printf ("tamanho de int %i bytes\n", intb);
	int charb = sizeof(char);
	printf ("tamanho de char %i bytes\n", charb);
	int floatb = sizeof(float);
	printf ("tamanho de float %i bytes\n", floatb);
	int longb = sizeof(long);
	printf ("tamanho de long %i bytes\n", longb);
	int doubleb = sizeof(double);
	printf ("tamanho de double %i bytes\n", doubleb);
	int shortb = sizeof(short);
	printf ("tamanho de short %i bytes\n", shortb);
	return 0;
}
