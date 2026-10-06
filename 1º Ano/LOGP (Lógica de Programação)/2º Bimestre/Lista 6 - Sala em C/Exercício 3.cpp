//Exercício 3: Exibir uma matriz B com 3 colunas
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int A[10], B[10][3], i, j, x; //Declarar as variáveis de vetor e as auxiliares

printf("Digite os valores da matriz A: \n"); //Solicitar ao usuário para digitar os valores da matriz A
for(i=0; i<=9; i++){ //Laço para ler os valores da matriz A
	scanf("%i", &A[i]); //Ler os valores da matriz A
}

for (i=0; i<=9; i++){ //Laço para fazer as atribuições da primeira coluna somando 5
	B[i][0] = A[i] + 5; // Atribuir o valor da matriz A somado com 5 para a primeira coluna da matriz B
	
	B[i][1] = 1;  //Atribuir 1 para os valores da segunda coluna da matriz B
	for(x = 1; x <= A[i]; x++) { // Laço para calcular o fatorial
		B[i][1] *= x; //Cálculo do fatorial
	}
	
	B[i][2] = A[i] * A[i]; //Atribuir para a terceira coluna da matriz B os valores dos quadrados da matriz A
}

printf("\nMatriz B:\n"); // Exibir para o usuário que os valores exibidos serão os valores da matriz B
for(i=0; i<=9; i++){ //Laço para exibir as linhas da matriz B
	for(j=0; j<=2; j++){ //Laço para exibir as colunas da matriz B
		printf("%i\t", B[i][j]); //Exibir a matriz B
	}
	printf("\n"); //Pulo de linha para exibir tabela organizada
}
return 0; //Finalizar o código
}
