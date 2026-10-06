//Exercício 1: Agenda de endereços, nomes, idade e telefones de cinco pessoas
#include <stdio.h> //Incluir a biblioteca stdio.h
#include <stdlib.h> //Incluir a biblioteca stdlib.h
#include <string.h> //Incluir a biblioteca string.h
int main(){ //Iniciar o código
struct agenda{ //Definir a estrutura de registro agenda
char nome[80], end[120], tel[12]; //Identificar as variáveis de texto
int id; //Identificar a variável inteira
};
struct agenda x[5]; //Identificar o vetor da estrutura da agenda com 5 posições

int cod, i, j, pesq, flag, e=1; //Identificar as variáveis inteiras
char alt[80], aux[80]; //Identificar as variáveis de texto
int ch; //Identificar a variável para limpeza de buffer

while (e!=0){ //Laço para repetir o programa enquanto e for diferente de 0
	printf("|Programa Agenda|\n\n"); //Exibir o título do programa para o usuário
	printf("1. Cadastro\n2. Pesquisa\n3. Ordem Alfabetica\n4. Alteracao\n\nEscolha uma opcao: "); //Exibir as opções do menu para o usuário
	scanf("%d", &cod); //Ler a opção digitada pelo usuário
	while((ch = getchar()) != '\n' && ch != EOF); //Laço para limpar o buffer do teclado
	system("cls"); //Limpar a tela do console
	switch(cod){ //Estrutura de decisão para selecionar a opção do menu
	case 1: //Caso a opção seja 1
	for(i=0;i<5;++i){ //Laço para cadastrar as informações das 5 pessoas
		printf("Cadastro e registros\n"); //Exibir o título da seção de cadastro
		printf("%do Nome: ", i + 1); //Solicitar para o usuário digitar o nome
		fgets(x[i].nome, 80, stdin); //Ler o nome digitado pelo usuário
		x[i].nome[strcspn(x[i].nome, "\n")] = '\0'; //Remover a quebra de linha da string nome
		printf("Endereco: "); //Solicitar para o usuário digitar o endereço
		fgets(x[i].end, 120, stdin); //Ler o endereço digitado pelo usuário
		x[i].end[strcspn(x[i].end, "\n")] = '\0'; //Remover a quebra de linha da string endereço
		printf("Telefone: "); //Solicitar para o usuário digitar o telefone
		fgets(x[i]. tel, 12, stdin); //Ler o telefone digitado pelo usuário
		x[i].tel[strcspn(x[i].tel, "\n")] = '\0'; //Remover a quebra de linha da string telefone
		printf("Idade: "); //Solicitar para o usuário digitar a idade
		scanf("%d", &x[i].id); //Ler a idade digitada pelo usuário
		while((ch = getchar()) != '\n' && ch != EOF); //Laço para limpar o buffer do teclado
		system("cls"); //Limpar a tela do console
		}
		break; //Interromper o case 1
	case 2: //Caso a opção seja 2
	flag=0; //Atribuir o valor 0 para a variável flag
	printf("Digite a idade do cadastro: "); //Solicitar para o usuário digitar a idade para pesquisa
	scanf("%i", &pesq); //Ler a idade digitada pelo usuário
	while ((ch = getchar()) != '\n' && ch != EOF); //Laço para limpar o buffer do teclado
	for (i=0; i<5; i++){ //Laço para percorrer os registros da agenda
		if(pesq == x[i].id){ //Verificar se a idade pesquisada é igual a idade do registro
			flag =1; //Atribuir o valor 1 para a variável flag se encontrar
			break; //Interromper o laço de repetição
		}
	}
	system("cls"); //Limpar a tela do console
	if (flag) { //Verificar se a flag é verdadeira
		printf("O cadastro da idade %i esta na posicao %i.\n", pesq, i + 1); //Exibir a posição do cadastro encontrado para o usuário
	}
	else{ //Caso a flag seja falsa
		printf("O cadastro da idade %i nao foi encontrado.\n", pesq); //Exibir mensagem de cadastro não encontrado para o usuário
	}
	break; //Interromper o case 2
	case 3: //Caso a opção seja 3
		for (i=0;i<4;++i){ //Laço externo para ordenação da matriz
			for(j=i+1;j<5;j++){ //Laço interno para ordenação da matriz
				if(strcmp(x[i].nome, x[j].nome) > 0){ //Verificar se o nome atual é maior que o próximo nome em ordem alfabética
				struct agenda temp = x[i]; //Atribuir o registro atual para a variável temporária
				x[i] = x[j]; //Atribuir o próximo registro para o registro atual
				x[j] = temp; //Atribuir a variável temporária para o próximo registro
			}
		}
	}
	printf("Ordem alfabetica:\n"); //Exibir para o usuário que os nomes ordenados serão exibidos
	for (i=0;i<5;++i){ //Laço para exibir os registros ordenados
		printf("Nome %i: %s\n", i+1, x[i].nome); //Exibir o nome do registro
	}
	break; //Interromper o case 3
	case 4: //Caso a opção seja 4
	flag=0; //Atribuir o valor 0 para a variável flag
	printf("Digite o nome do registro que deseja alterar: "); //Solicitar para o usuário digitar o nome para alteração
	fgets(alt, 80, stdin); //Ler o nome digitado pelo usuário
	alt[strcspn(alt, "\n")] = '\0'; //Remover a quebra de linha da string de alteração
	for (i=0;i<5;++i){ //Laço para buscar o nome nos registros da agenda
		if(strcmp(alt, x[i].nome) == 0){ //Verificar se o nome digitado é igual ao nome do registro
			flag=1; //Atribuir o valor 1 para a variável flag se encontrar
			break; //Interromper o laço de repetição
		}
	}
	if(flag){ //Verificar se a flag é verdadeira
	printf("Registro antigo:\n"); //Exibir para o usuário que os dados antigos serão mostrados
	printf("Nome %s\n", x[i].nome); //Exibir o nome do registro antigo
	printf("Endereco: %s\n", x[i].end); //Exibir o endereço do registro antigo
	printf("Telefone: %s\n", x[i].tel); //Exibir o telefone do registro antigo
	printf("Idade: %i\n", x[i].id); //Exibir a idade do registro antigo
	getchar(); //Aguardar o usuário pressionar uma tecla
	system("cls"); //Limpar a tela do console
	printf("Alteracao de registro\n"); //Exibir o título da seção de alteração
	printf("Nome: "); //Solicitar para o usuário digitar o novo nome
	fgets(x[i].nome, 80, stdin); //Ler o novo nome digitado pelo usuário
	x[i].nome[strcspn(x[i].nome, "\n")] = '\0'; //Remover a quebra de linha da string nome
	printf("Endereco: "); //Solicitar para o usuário digitar o novo endereço
	fgets(x[i].end, 120, stdin); //Ler o novo endereço digitado pelo usuário
	x[i].end[strcspn(x[i].end, "\n")] = '\0'; //Remover a quebra de linha da string endereço
	printf("Telefone: "); //Solicitar para o usuário digitar o novo telefone
	fgets(x[i].tel, 12, stdin); //Ler o novo telefone digitado pelo usuário
	x[i].tel[strcspn(x[i].tel, "\n")] = '\0'; //Remover a quebra de linha da string telefone	
	printf("Idade: "); //Solicitar para o usuário digitar a nova idade
	scanf("%i", &x[i].id); //Ler a nova idade digitada pelo usuário
	while ((ch = getchar()) != '\n' && ch != EOF); //Laço para limpar o buffer do teclado
	system("cls"); //Limpar a tela do console
	printf("Novo registro: \n"); //Exibir para o usuário que os novos dados serão mostrados
	printf("Nome: %s\n", x[i].nome); //Exibir o novo nome cadastrado
	printf("Endereco: %s\n", x[i].end); //Exibir o novo endereço cadastrado
	printf("Telefone: %s\n", x[i].tel); //Exibir o novo telefone cadastrado
	printf("Idade: %i\n", x[i].id); //Exibir a nova idade cadastrada
	} else{ //Caso a flag seja falsa
		printf("Cadastro nao encontrado.\n"); //Exibir mensagem de cadastro não encontrado para o usuário
	}
	break; //Interromper o case 4
	default: //Caso seja digitada uma opção fora do switch
		printf("Codigo invalido. Tente novamente.\n"); //Exibir mensagem de código inválido para o usuário
		break; //Interromper o default
	}
printf("\nPara sair - 0\nPara continuar - 1\nDeseja continuar no programa?: "); //Solicitar para o usuário decidir se deseja continuar
scanf("%i", &e); //Ler a opção de continuação digitada pelo usuário
while ((ch = getchar()) != '\n' && ch != EOF); //Laço para limpar o buffer do teclado
system("cls"); //Limpar a tela do console
}
return 0; //Finalizar o código
}
