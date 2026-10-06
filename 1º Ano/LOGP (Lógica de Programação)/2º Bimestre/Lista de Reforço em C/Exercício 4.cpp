//Exercício 4: Exibir a soma por linha e por coluna em uma matriz 5x5
#include<stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
	int m[5][5], sl[5]={0}, sc[5]={0}, i, j; //Declarar a matriz m, os vetores sl e sc zerados para acumular as somas, e as variáveis auxiliares
	for(i=0; i<=4; i++){ //Laço para ler as linhas da matriz
		for(j=0; j<=4; j++){ //Laço para ler as colunas da matriz
			printf("Digite o valor para a posicao %d %d: ", i, j); //Solicitar ao usuário para digitar os valores da matriz
			scanf("%i", &m[i][j]); //Ler os valores da matriz digitados pelo usuário
		}
	}
	for(i=0; i<=4; i++){ //Laço para processar as linhas da matriz
		for(j=0; j<=4; j++){ //Laço para processar as colunas da matriz
			sl[i] = sl[i] + m[i][j]; //Comando para acumular na posição i do vetor sl a soma da linha correspondente
			sc[j] = sc[j] + m[i][j]; //Comando para acumular na posição j do vetor sc a soma da coluna correspondente
		}
	}
	printf("\nA soma de cada linha e: \n"); //Exibir ao usuário que os números seguintes serão as somas das linhas
	for(i=0; i<=4; i++){ //Laço para exibir as somas das linhas
		printf("Linha %i: %i\n", i, sl[i]); //Exibir as somas acumuladas no vetor sl
	}
	printf("\nA soma de cada coluna e: \n"); //Exibir ao usuário que os números seguintes serão as somas das colunas
	for(j=0; j<=4; j++){ //Laço para exibir as somas das colunas
		printf("Coluna %i: %i\n", j, sc[j]); //Exibir as somas acumuladas no vetor sc
	}
	return 0; //Finalizar o código
}
