//F�bio Lu�s de Carvalho Terra 2321055
#include "stdio.h"
#include "locale.h"
#include "math.h"

int main(){
setlocale(LC_ALL, "Potuguese");
	float n1 = 9.5;
	float n2 = 2;
	printf ("\n o valor absoluto de %.1f � %.1d", n1,abs(n1));
	printf ("\n pot�ncia %.1f^%.1f = %.3f", n1,n2, pow(n1,n2));
	printf ("\n raiz quadrada de %.1f=%.3f", n1,sqrt(n1));
	printf ("\n arredondando %.1f para baixo %.1f", n1,floor(n1));
	printf ("\n arredondando %.1f para cima %.1f", n1,ceil(n1));
	printf ("\n o valor de E elevado a %.1f � %.3f", n1,exp(n1));
	
	
	return 0;
}