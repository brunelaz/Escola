//Exercício 4: Exibir todos os números
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int a[5], b[5], c[10], i; //Declarar as variáveis dos vetores
printf("Digite os valores do primeiro vetor: \n"); //Solicitar para o usuário digitar os valores do primeiro vetor
for (i = 0; i<=4; i++){ //Valor inicial: 0; Enquanto a variável i for menor ou igual a 4; Incrementar na variável i
scanf("%i", &a[i]); // Ler os valores do primeiro vetor
c[i] = a[i]; //Atribuir os valores do primeiro vetor
}
printf("\nDigite os valores do segundo vetor: \n"); //Solicitar para o usuário digitar os valores do segundo vetor
for (i=0; i<=4; i++){ //Valor inicial: 0; Enquanto a variável i for menor ou igual a 4; Incrementar na variável i
scanf("%i", &b[i]); // Ler os valores do segundo vetor
c[i+5] = b[i]; //Atribuir os valores do segundo vetor
}

printf("\nValores digitados: "); //Exibir que os números seguintes serão todos os valores juntos
for (i=0; i<=9; i++){ //Valor inicial: 0; Enquanto a variável i for menor ou igual a 9
	printf("%i  ", c[i]); //Exibir os resultados dos usuários
}
return 0; //Finalizar o código
}
