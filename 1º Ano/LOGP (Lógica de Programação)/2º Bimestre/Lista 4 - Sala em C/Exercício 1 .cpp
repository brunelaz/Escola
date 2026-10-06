//Exercício 1: Elementos do vetor multiplicado por 3
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { // Iniciar o códiog
	int a[5], b[5], i; //Declarar as variáveis vetores e a variável comum
	
	printf("Digite o numeros do vetor:\n"); //Solicitar para o usuário digitar os números do vetor
	for(i=1; i<=5; i++){ //Valor inicial: 1; Enquanto i for menor ou igual a 5; Incrementar na variável i
	scanf("%i", &a[i]); //Ler os valores digitados pelo usuário
	b[i]=a[i]*3;// Calcular a multiplicação dos valores por 3
	}
	printf("A matriz B e: "); // Exibir que os números a seguir serão os resultados da matriz
	for(i=1; i<=5; i++){ //Valor inicial: 1; Enquanto a variável for menor ou igual a 5; Incrementar na variável i
		printf("%i ", b[i]); //Exibir os resultados das multiplicações
	}
	
	return 0; //Finalizar o código
}
