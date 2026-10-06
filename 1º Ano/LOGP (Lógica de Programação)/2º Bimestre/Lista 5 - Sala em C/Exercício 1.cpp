//Exercício 1: Exibir 5 valores em ordem decrescente
#include <stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
	int n[4], i, j, x; //Declarar a variável de vetor e as outras 3 variáveis
printf("Digite os elementos: \n"); //Solicitar ao usuário para digitar os valores
for (i=0; i<5; i++){ //Laço para ler os 5 valores
scanf("%d", &n[i]);	//Ler os valores digitados pelo usuário
}
for (i=0; i<=3; i++){ //Laço para fazer o bubble sort
	for (j=i+1; j<=4; j++){ //Laço para fazer o bubble sort
		if(n[i] < n[j]){ //Se o número da posição i no vetor for menor que o da posição j
			x=n[i]; //Atribuir o valor da posição i para a variável x
			n[i] = n[j]; //Atribuir o valor da posição j para a posição i
			n[j] = x; //Atribuir o valor da variável x para a posição j
		}
	}
}
	printf("\nOrdem decrescente: \n"); //Exibir ao usuário que os próximos números serão em ordem decrescente
	for (i=0; i<=4; i++){ //Laço para exibir os números
		printf("%d\n", n[i]); //Exibir os números
	}
return 0; //Finalizar o código
}
