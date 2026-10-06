//Exercício 9: Ler 5 elementos e colocar os elementos em ordem alfabética e criar rotina de pesquisa
#include <stdio.h> //Incluir biblioteca stdio.h
#include <string.h> //Incluir biblioteca string.h para mexer com textos

int main(){//Iniciar o código
char a[5][30], x[30], n[30]; //Identificar as variáveis char
int i, j, encontrado=0; //Identificar as variáveis int

printf("Digite os nomes da matriz A:\n");//Solicitar para o usuário digitar os valores da matriz A
for(i=0;i<5;++i){ //Laço para ler os valores da matriz A
	scanf("%s", a[i]); //Ler os valores digitados pelo usuário
}

	for (i=0; i<5; i++){ //Laço para fazer o bubble sort 
    for (j=i+1; j<5; j++){ //Laço para fazer o bubble sort 
        if(strcmp(a[i], a[j]) > 0){ //Se o vetor i for maior que o j na ordem alfabética
            strcpy(x, a[i]); //Atribuir o valor de a no vetor i para a variável x
            strcpy(a[i], a[j]); //Atribuir o valor de a no vetor j para a variável do a no vetor i
            strcpy(a[j], x); //Atribuir o valor da variável x para a variável do a no vetor j
            }
        }
    }
    
    printf("Valores da matriz A em ordem alfabética:\n");//Exibir ao usuário que os próximos nomes serão os nomes da matriz A em ordem alfabética
    for(i=0;i<5;i++){ //Laço para exibir os valores
    	printf("%s\n", a[i]);//Exibir os valores ao usuário
	}
	
	printf("\nDigite o nome a ser pesquisado na matriz A: "); //Solicitar ao usuário para digitar o nome para pesquisar
	scanf("%s", n); //Ler o nome digitado pelo usuário 
	for (j=0; j<5; j++){ //Laço para exibir a posição do número
		if(strcmp(a[j], n) == 0){ //Se o nome atual for igual ao digitado pelo usuário
			printf("\nFoi localizado em: %d", j+1); //Exibir ao usuário a posição do nome pesquisado
			encontrado =1; //Definir a variável encontrado como 1
			break; //Terminar o laço
		}
	}
	if (encontrado == 0){ //Se a variável encontrado for igual a 0
		printf("\nNome nao encontrado."); //Exibir que o nome digitado pelo usuário não foi encontrado
	}
	return 0; //Finalizar o código	
}
