//Fábio Luís de Carvalho Terra 2321055
#include <stdio.h>
int main() {
	char nomeRA[24] = {'F','a','b','i','o',' ','C','a','r','v','a','l','h','o', ' ','-',' ','2','3','2','1','0','5','5'};
	int i;
	for (i = 0; i < 24; i++) {
		printf("%c", nomeRA[i]);
	}
	return 0;
}
