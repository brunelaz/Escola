//Exercício 3: Subtração dos dois valores
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código

int a[5], b[5], c[5], i; //Declarar as variáveis
printf("Digite os valores do primeiro vetor: \n"); //Solicitar para o usuário digitar os valores do primeiro vetor
for(i=0; i<=4; i++) { //Valor inicial: 0; Enquanto i for menor ou igual a 4; Incrementar na variável i
	scanf("%i", &a[i]); //Ler os valores do primeiro vetor
}
printf("\n\nDigite os valores do segundo vetor: \n"); //Solicitar para o usuário digitar os valores do segundo vetoe
for(i=0; i<=4; i++){ //Valor inicial: 0; Enquanto a variável i for menor ou igual a 4; Incrementar na variável i
	scanf("%i", &b[i]); // Ler os valores do segundo vetor
}
printf("\nResultados das subtracoes: "); //Exibir que os números a seguir serão os resultados das subtrações
for (i=0; i<=4; i++){ //Valor inicial: 0; Enquanto a variável i for menor ou igual a 4; Incrementar na variável i
	c[i] = a[i] - b[i]; //Atribuir para a variável c os valores das subtrações
	printf("%i ", c[i]); //Exibir os resultados das subtrações
}
return 0; // Finalizar o código
}
