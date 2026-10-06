//Exercício 2: Exibir 2 matrizes uma em cada coluna
#include <stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
	int A[7], B[7], C[7][2], i, j; //Declarar as variáveis de vetor e auxiliares
	printf("Digite os valores da matriz A: \n");//Solicitar ao usuário para digitar os valores da matriz A
	for(i=0; i<=6; i++){ //Laço para ler os valores da matriz A
		scanf("%i", &A[i]); //Ler os valores da matriz A
	}
	printf("Digite os valores da matriz B: \n"); //Solicitar ao usuário para digitar os valores da matriz B
	for(i=0; i<=6; i++){ //Laço para ler os valores da matriz B
	scanf("%i", &B[i]); //Ler os valores da matriz B
	}
    for(i=0;i<=6;i++){ //Laço para atribuir os valores da matriz A para a primeira coluna da matriz C
    	C[i][0] = A[i]; //Atribuir os valores da matriz A para a primeira coluna da matriz C
	}
	for(i=0;i<=6;i++){ //Laço para atribuir os valores da matriz B para a segunda coluna da matriz C
		C[i][1] = B[i]; //Atribuir os valores da matriz B para a segunda coluna da matriz C
	}
	printf("Valores das somas: \n");//Exibir para o usuário que os números seguintes serão as somas dos valores
	for(i=0;i<=6;i++){ //Laço para exibir as linhas da matriz C
		for(j=0;j<=1;j++){ //Laço para exibir as colunas da matriz C
			printf("%i  ", C[i][j]); //Exibir as linhas e a colunas da matriz C
		}
		printf("\n"); //Printf para pular linha para a matriz C ficar em formato de tabela
	}
	return 0; //Finalizar o código
}
