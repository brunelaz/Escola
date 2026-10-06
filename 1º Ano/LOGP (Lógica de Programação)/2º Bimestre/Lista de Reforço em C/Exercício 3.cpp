//Exercício 3: Ordenar um vetor de 10 números e fazer uma rotina de pesquisa
#include <stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
int n[10], x, i, j, y, flag=0; //Declarar as variáveis
for(i=0;i<10;i++){ //Laço para ler os valores
	printf("Digite um valor: "); //Solicitar para o usuário digitar os valores
	scanf("%i", &n[i]); //Ler os valores
}
for (i=0; i<9; i++){ //Laço para fazer o bubble sort
	for (j=i+1;j<10;j++){ //Laço para fazer o bubble sort
		if(n[i] > n[j]){ //Se o vetor i for maior que o j
			x = n[i]; //Atribuir o valor de n no vetor i para a variável x
			n[i] = n[j]; //Atribuir o valor de n no vetor j para a variável do n no vetor i
			n[j] = x; //Atribuir o valor da variável x para a variável do n no vetor x
		}
	}
}
printf("\nDigite um valor para ser pesquisado: "); //Solicitar para o usuário digitar um valor para ser pesquisado
scanf("%i", &y); //Ler o valor digitado
for(i=0;i<10;++i){ //Laço para percorrer os 10 valores do vetor
if(n[i] == y){ //Se o valor atual for igual o valor digitado pelo usuário
	flag=1; //Atribuir 1 para a variável flag
}
}
if(flag==1){ //Se flag for igual a 1
	printf("O valor digitado esta no vetor."); //Exibir que o valor digitado pelo usuário está no vetor
}
else{ //Se não
	printf("O valor digitado nao esta no vetor"); //Exibir que o valor digitado não está no vetor
}
return 0; //Finalizar o código
}
