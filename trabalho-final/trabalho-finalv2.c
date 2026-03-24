#include <stdio.h>
#include <string.h>
//Digitaliza��o dos numeros, email, zap....
typedef struct {
    char nome[50];
    char email[50];
    char whatsapp[15];
    char instagram[50];
} Contato;

Contato agenda[100];
int count = 0;
//Fun��o para Cadastrar os Dados
void cadastrar() {
    printf("Digite o nome: ");
    scanf("%s", agenda[count].nome);
    printf("Digite o e-mail: ");
    scanf("%s", agenda[count].email);
    printf("Digite o numero do WhatsApp: ");
    scanf("%s", agenda[count].whatsapp);
    printf("Digite o seu Instagram: ");
    scanf("%s", agenda[count].instagram);
    count++;
}
//Fun��o para alterar os Dados
void alterar() {
    char nome[50];
    printf("Digite o nome do contato que deseja alterar: ");
    scanf("%s", nome);
    int i = 0;
    for(i = 0; i < count; i++) {
        if(strcmp(agenda[i].nome, nome) == 0) {
            printf("Digite o novo e-mail: ");
            scanf("%s", agenda[i].email);
            printf("Digite o novo numero do WhatsApp: ");
            scanf("%s", agenda[i].whatsapp);
            printf("Digite o seu Instagram: ");
            scanf("%s", agenda[i].instagram);
            return;
        }
    }
    printf("Contato nao encontrado.\n");
}
//Fun�ao para excluir um Dado
void excluir() {
    char nome[50];
    printf("Digite o nome do contato que deseja excluir: ");
    scanf("%s", nome);
    int i = 0;
    for(i = 0; i < count; i++) {
        if(strcmp(agenda[i].nome, nome) == 0) {
            int j =i;
			for(j = i; j < count-1; j++) {
                agenda[j] = agenda[j+1];
            }
            count--;
            return;
        }
    }
    printf("Contato nao encontrado.\n");
}
//Listar
void listar() {
	int i = 0;
    for(i = 0; i < count; i++) {
        printf("Nome: %s\n", agenda[i].nome);
        printf("E-mail: %s\n", agenda[i].email);
        printf("WhatsApp: %s\n", agenda[i].whatsapp);
        printf("Instagram: %s\n", agenda[i].instagram);
        printf("\n");
    }
}
//localizar o Dado
void localizar() {
    char nome[50];
    printf("Digite o nome do contato que deseja localizar: ");
    scanf("%s", nome);
    int i = 0;
    for(i = 0; i < count; i++) {
        if(strcmp(agenda[i].nome, nome) == 0) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("E-mail: %s\n", agenda[i].email);
            printf("WhatsApp: %s\n", agenda[i].whatsapp);
            printf("Instagram: %s\n", agenda[i].instagram);
            return;
        }
    }
    printf("Contato n�o encontrado.\n");
}
//sem if/esle aqui vamo usar switch para op��o
int main() {
    int opcao;
    do {
        printf("\n\n1. Cadastrar contato\n");
        printf("2. Alterar contato\n");
        printf("3. Excluir contato\n");
        printf("4. Listar contatos\n");
        printf("5. Localizar contato\n");
        printf("6. Sair\n\n");
        printf("Escolha uma opcao: \n\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                alterar();
                break;
            case 3:
                excluir();
                break;
            case 4:
                listar();
                break;
            case 5:
                localizar();
                break;
        }
    } while(opcao != 6);
    return 0;
}
