//Exercício 1: exibir a soma das matrizes A e B
#include<stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
	int A[5][3], B[5][3], C[5][3], i, j;//Declarar as variáveis A, B e C como vetor e as variáveis auxiliares
	for(i=0; i<=4; i++){ //Laço para ler as linhas da matriz A
	for(j=0; j<=2; j++){ //Laço para ler as colunas da matriz A
		printf("\nDigite os valores da matriz A: "); //Solicitar ao usuário para digitar os valores da matriz A
		scanf("%i", &A[i][j]); //Ler os valores da matriz A
	}
}
	for(i=0; i<=4; i++){ //Laço para ler as linhas da matriz B
		for(j=0; j<=2; j++){ //Laço para ler as colunas da matriz B
			printf("\nDigite os valores da matriz B: "); //Soliciar ao usuário para digitar os valores da matriz B
			scanf("%d", &B[i][j]); //Ler os valores da matriz B
		}
	}
	printf("As somas sao: \n"); //Exibir ao usuário que os números seguintes serão a soma das 2 matrizes
	for(i=0; i<=4; i++){ //Laço para exibir e atribuir as linhas da matriz C da soma
		for(j=0; j<=2; j++){ // Laço para exibir e atribuir as colunas da matriz C da soma
			C[i][j] = A[i][j] + B[i][j]; //Comando para atribuir para a matriz C a soma das matrizes A e B
			printf("%d  ", C[i][j]); //Exibir as somas
		}
		printf("\n");
	}
	return 0; //Finalizar o comando
}
