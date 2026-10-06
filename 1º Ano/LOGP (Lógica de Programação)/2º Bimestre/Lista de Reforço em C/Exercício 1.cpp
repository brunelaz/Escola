//Exercício 1: Frequência de elementos em um vetor
#include<stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
	int v[20], c[10] = {0}, i; //Declarar o vetor v, o vetor de contagem c zerado e a variável auxiliar i
	for(i=0; i<=19; i++){ //Laço para ler os 20 elementos do vetor. Valor inicial: 0; Enquanto i for menor ou igual a 19; Incrementar 1 na variável i
		printf("Digite um valor entre 0 e 9: "); //Solicitar ao usuário para digitar os valores
		scanf("%i", &v[i]); //Ler os valores digitados pelo usuário
		c[v[i]] = c[v[i]] + 1; //Incrementar a contagem na posição do número digitado
	}
	printf("\nA frequencia de cada numero e: \n"); //Exibir ao usuário que os números seguintes serão a contagem
	for(i=0; i<=9; i++){ //Laço para exibir a contagem de 0 a 9. Valor inicial: 0; Enquanto i for menor ou igual a 9; Incrementar 1 na variável i
		if(c[i] > 0){ //Verificar se o número apareceu pelo menos uma vez
			printf("O numero %i apareceu %i vezes\n", i, c[i]); //Exibir quantas vezes cada número apareceu
		}
	}
	return 0; //Finalizar o código
}

