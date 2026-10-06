#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
struct idosos {
char nome[50];
int idade;
float peso;
};
struct idosos x[6], temp;
int op, i, j, ch, encontrou;
for(i = 0; i < 6; i++) {
strcpy(x[i].nome, "");
x[i].idade = 0;
x[i].peso = 0;
    }
    do {
    printf("\n========== IDOSOS ==========\n\n");
    printf("1 - Cadastro\n");
    printf("2 - Listagem aposentados\n");
    printf("3 - Ordem decrescente do peso\n");
    printf("0 - Fim\n\n");
    printf("Escolha: ");
    scanf("%i", &op);
    while ((ch = getchar()) != '\n' && ch != EOF);
    system("cls"); 
    switch (op) {
    case 1:
	printf("===== CADASTRO =====\n\n");
    for (i = 0; i < 6; i++) {
    printf("Nome: ");
    fgets(x[i].nome, 50, stdin);
    x[i].nome[strcspn(x[i].nome, "\n")] = '\0';
    printf("Idade: ");
    scanf("%i", &x[i].idade);
    printf("Peso: ");
    scanf("%f", &x[i].peso);
    while ((ch = getchar()) != '\n' && ch != EOF); 
    printf("\n");
	}
    system("cls");
    printf("Cadastros realizados com sucesso!\n");
    break;
    case 2:
    printf("===== APOSENTADOS (>= 65 anos) =====\n\n");
    encontrou = 0;
    for (i = 0; i < 6; ++i) {
    if(x[i].idade >= 65) { 
    encontrou = 1;
    printf("Nome: %s\n", x[i].nome);
    printf("Idade: %i\n", x[i].idade);
    printf("Peso: %.2f\n\n", x[i].peso);
    }
    }
    if (encontrou == 0) {
    printf("Nenhum aposentado encontrado.\n");
    }
    break;
	case 3:
    printf("===== ORDEM DECRESCENTE DE PESO =====\n\n");
    for (i = 0; i < 5; i++) {
    for (j = 0; j < 5 - i; j++) {
    if (x[j].peso < x[j + 1].peso) { 
    temp = x[j];
	x[j] = x[j + 1];
    x[j + 1] = temp;
    }}}
    for (i = 0; i < 6; i++) {
    if (x[i].idade > 0) {
    printf("Nome: %s \nPeso: %.2f \nIdade: %i\n\n", x[i].nome, x[i].peso, x[i].idade);
    }}
    break;
	case 0:
    printf("Programa finalizado.\n");
    break;       
    default:
    printf("Opcao invalida!\n");
    break;
}
    } while (op != 0);
    return 0; 
}
