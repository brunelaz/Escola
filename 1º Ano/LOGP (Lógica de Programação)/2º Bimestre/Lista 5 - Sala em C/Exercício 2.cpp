//Exercício 2: Transferir os valores de a multiplicados por 5 para b e exibir em ordem crescente
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int a[8], b[8], i, j, x, n, encontrado = 0; //Declarar as variáveis
printf("Digite os números: "); //Solicitar ao usuário para digitar os valores
for (i=0; i<8; i++){ //Laço para escanear os valores
scanf("%d", &a[i]); //Ler os valores digitados pelo usuário
b[i] = a[i] * 5; //Fazer as atribuições dos valores de a multiplicado por 5 para b 
}
for (i=0; i<7; i++){ //Laço para fazer o bubble sort
	for (j=i+1;j<8;j++){ //Laço para fazer o bubble sort
		if(b[i] > b[j]){ //Se o vetor i for maior que o j
			x = b[i]; //Atribuir o valor de b no vetor i para a variável x
			b[i] = b[j]; //Atribuir o valor de b no vetor j para a variável do b no vetor i
			b[j] = x; //Atribuir o valor da variável x para a variável do b no vetor x
		}
	}
}
printf("\nVetor B ordenado em ordem crescente:\n "); //Exibir ao usuário que os próximos números serão ordenados em ordem crescente
for (j=0; j<8; j++){ //Laço para exibir os números em ordem crescente
	printf("\n%d", b[j]); //Exibib os números em ordem crescente
	}
	printf("\nDigite o numero a ser pesquisado: "); //Solicitar ao usuário para digitar o número para pesquisar
	scanf("%d", &n); //Ler o número digitado pelo usuário 
	for (j=0; j<8; j++){ //Laço para exibir a posição do número
		if(b[j] == n){ //Se o número atual for igual ao digitado pelo usuário
			printf("Foi localizado em: %d", j+1); //Exibir ao usuário a posição do número
			encontrado =1; //Definir a variável encontrado como 1
			break; //Terminar o laço
		}
	}
	if (encontrado == 0){ //Se a variável encontrado for igual a 0
		printf("Numero nao encontrado."); //Exibir que o número digitado pelo usuário não foi encontrado
	}
	return 0; //Finalizar o código
}
