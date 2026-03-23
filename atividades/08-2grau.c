#include <stdio.h>
#include <math.h>
 int main (){
    //cria��o de vari�veis
    int a;
    int b;
    int c;

    //explicando o programa e pedindo valores da equa��o
    printf ("\n lembrando que uma equa��o do segundo grau � representada por ax�+bx+c=0 \n \n");
    printf ("\n Informe o valor de a:  ");
    scanf ("%i", &a);
    printf ("\n Informe o valor de b:  ");
    scanf ("%i", &b);
    printf ("\n Informe o valor de c:  ");
    scanf ("%i", &c);
    
    //mostrando a equa��o
    printf ("\n Equacao: %ix^2", a);
    if (b>0){
    	printf( "+%ix", b);
	} else {
		printf("%ix", b);
	}
	if (c>0){
		printf("+%i", c);
	} else {
		printf("%i",c);
	}

    //calcular o delta
    float delta = (pow(b,2))-((4*a)*c);
    printf ("\n\n delta vale: %.3f", delta);
    
    //calcular baskhara
    float x1;
    float raizdelta = sqrt(delta);
	x1 = (-b + raizdelta)/(2*a);
	float x2;
	x2 = (-b - raizdelta)/(2*a);
	printf ("\n\n Resultado: x_1 = %.3f e x_2 = %.3f", x1,x2);
	
    return 0;
 }
