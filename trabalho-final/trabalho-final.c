#include <stdio.h>
#include <string.h>

struct contact {
    char name[51];
    char phone[16];
    char email[251];
    char instagram[51];
};
// PROCURAR ID
int idfinder() {
    FILE *agenda;
    char caractere;
    int line = 0;


    agenda = fopen("agenda.txt", "r");

    while ((caractere = fgetc(agenda)) != EOF) {
        if (caractere == '\n') {
            line++;
        }
    }

    // Fecha o arquivo
    fclose(agenda);

    return line;
}

// ESCREVER NA AGENDA
void write_contact (struct contact *contacts) {
    // Opera��es de escrita no arquivo
    int line = idfinder();
	FILE *agenda;
    //escrevendo o conteudo
	agenda = fopen("agenda.txt", "a+");
	fprintf(agenda, "%i ", line);
	fprintf(agenda, " %s", contacts->name);
	fprintf(agenda, " %s", contacts->email);
	fprintf(agenda, " %s", contacts->phone);
	fprintf(agenda, " %s\n\n", contacts->instagram);
	fclose (agenda);
}
// OP��O CADASTRO
void fregister(struct contact *contacts, int *numContacts) {
    	
	FILE *agenda;

	// *OBRIGAT�RIO	
		// ID do contato
	int ID = idfinder();
		// Nome do contato

    printf("\n\n Nome: ");
    fgets(contacts->name, sizeof(contacts->name), stdin);
    fflush(stdin); // Limpa o buffer de entrada

      // Email do contato

    printf("\n\n Email: ");
    fgets(contacts->email, sizeof(contacts->email), stdin);
   	fflush(stdin); // Limpa o buffer de entrada

    // OPCIONAIS

    int choice = 0;

      // Telefone do contato

    printf("\n\n Caso queira adicionar o numero de telefone digite 1: ");
    scanf("%i", &choice);
    fflush(stdin);

    if (choice == 1) {
        printf("\n\n Telefone: ");
        fgets(contacts->phone, sizeof(contacts->phone), stdin);
        fflush(stdin);
    } else {
        printf("\n okay!");
    }

    	// Instagram do contato

    printf("\n\n Caso queira adicionar o instagram digite 1: ");
    scanf("%d", &choice);
    fflush(stdin);

    if (choice == 1) {
        printf("\n\n Instagram: ");
        fgets(contacts->instagram, sizeof(contacts->instagram), stdin);
    } else {
        printf("\n okay!");
    }
    
}
// OP��O EDITAR
void fedit() {
  

}
// OP��O DELETAR
void fdelete() {
	
}
// OP��O LISTAR
void flist() {
	FILE *agenda = fopen("agenda.txt", "r");
    char linha[50];
    while (fgets(linha, sizeof(linha), agenda) != NULL) {
        printf("%s", linha);
    }
    fclose(agenda);
}
// OP��O PROCURA
void fsearch() {
	
};
int main() {
    int option = 0;
    struct contact *contacts[50];

    printf("\n\n INICIANDO AGENDA");
    FILE *agenda;
	agenda = fopen ("agenda.txt", "r");
	
    if (agenda == NULL) {
        // Caso a agenda n�o exista
        printf("\n\n DOCUMENTO NAO ENCONTRADO \n\n");
        printf("\n Digite 1 caso queira criar uma agenda: ");
        int choice;
        scanf("%i", &choice);
      
        if (choice == 1) {
            agenda = fopen("agenda.txt", "w");
            fclose(agenda);
        } else {
            return 1;
        }
    }
	fclose (agenda);
	
    while (option != 9) {
        printf("\n\n O que voce deseja fazer? \n\n 1- Cadastrar \n 2- Editar \n 3- Excluir \n 4- Listar \n 5- Procurar \n 9- Sair");
        printf("\n Digite: ");
        scanf("%i", &option);
        
        if (option != 9) {
            switch (option) {
                case 1:
                    //fregister();
                    break;
                case 2:
                    fedit();
                    break;
                case 3:
                    fdelete();
                    break;
                case 4:
                    flist();
                    break;
                case 5:
                    fsearch();
                    break;
                default:
                    printf("\n opcao invalida \n");
            }
        } else {
            printf("\n\n Goodbye \n\n");
        }
    }

    return 0;
}
