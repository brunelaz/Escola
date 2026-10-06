//Exercício 4: Matriz A multiplicado por 2 e matriz B subtraido por 5
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int a[4], b[4], c[4][2], i, j; //Identificar as variáveis
for(i=0; i<4; i++){ //Laço para ler os valores da matriz A
printf("Digite um valor da matriz A:");//Solicitar para o usuário digitar um valor para a matriz A
scanf("%d", &a[i]); //Ler o valor digitado pelo usuário
}
printf("\n"); //Pular linha para organizar as solicitações para o usuário
for(i=0; i<4; i++){ //Laço para ler os valores da matriz B
printf("Digite um valor da matriz B:");//Solicitar para o usuário digitar um valor para a matriz B
scanf("%d", &b[i]); //Ler o valor digitado pelo usuário
}
for (i=0;i<4;i++){ //Laço para fazer as atribuições da matriz C
c[i][0]	= a[i] * 2; //Atribuir os valores da matriz A multiplicado por 2 para a primeira coluna da matriz C
c[i][1] = b[i] - 5; //Atribuir os valores da matriz B subtraidos por 5 para a primeira coluna da matriz C
}
printf("\nMatriz C:\n"); // Exibir para o usuário que os valores exibidos serão os valores da matriz C
for(i=0; i<4; i++){ //Laço para exibir as linhas da matriz C
	for(j=0; j<2; j++){ //Laço para exibir as colunas da matriz C
		printf("%i\t", c[i][j]); //Exibir a matriz C
	}
	printf("\n"); //Pulo de linha para exibir tabela organizada
}
return 0;
}
