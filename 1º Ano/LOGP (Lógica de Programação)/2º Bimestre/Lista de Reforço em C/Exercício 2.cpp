//Exercício 2: Ordenar vetor com 15 valores em ordem crescente
#include<stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
	int n[15], x, i, j; //Declarar as variáveis
	for(i=0; i<15; i++){ //Laço para ler 15 elementos do vetor. Valor inicial: 0; Enquanto i for menor que 15; Incrementar 1 na variável i
		printf("Digite um valor: "); //Solicitar ao usuário para digitar os valores
		scanf("%i", &n[i]); //Ler os valores digitados pelo usuário
	}
for (i=0; i<14; i++){ //Laço para fazer o bubble sort
	for (j=i+1;j<15;j++){ //Laço para fazer o bubble sort
		if(n[i] > n[j]){ //Se o vetor i for maior que o j
			x = n[i]; //Atribuir o valor de n no vetor i para a variável x
			n[i] = n[j]; //Atribuir o valor de n no vetor j para a variável do n no vetor i
			n[j] = x; //Atribuir o valor da variável x para a variável do n no vetor x
		}
	}
}
printf("Valores em ordem crescente:\n"); //Exibir que os seguintes números serão em ordem crescente
for(i=0;i<15;++i){ //Laço para exibir os valores
printf("%i\n", n[i]); //Exibir os valores ao usuário
}
	return 0; //Finalizar o código
}
