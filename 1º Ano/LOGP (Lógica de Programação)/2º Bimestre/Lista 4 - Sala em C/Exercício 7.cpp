//Exercício 7: Exibir valores invertidos
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int a[10], b[10], i, x=9; //Declarar as variáveis de vetores e a variável comum
printf("Digite os valores do primeiro vetor: \n"); //Solicitar para o usuário digitar os valores do primeiro vetor
for (i = 0; i<=9; i++){ //Valor inicial: 0; Enquanto a variável i for menor ou igual a 9
	scanf("%i", &a[i]); //Ler os resultados digitados pelo usuário
	b[x] = a[i]; 
	x = x-1; 
}
printf("\nValores invertidos: ");
for (i = 0; i <=9; i++) {
	printf("%d \n", b[i]);
	}
	return 0;
}
