//Exercício 6: Ler 3 elementos e atribuir a outra matriz o cubo desses elementos
#include <stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
int a[3], b[3], n, i, j, encontrado=0; //Identificar as variáveis
printf("Digite os valores da matriz A:\n");//Solicitar para o usuário digitar os valores da matriz A
for (i=0;i<3;i++){//Laço para ler os valores da matriz A
scanf("%d", &a[i]); //Ler os valores digitados pelo usuário
}
for (i=0;i<3;i++){//Laço para fazer as atribuições com o cubo
b[i] = (a[i] * a[i] * a[i]); //Atribuir para os valores do vetor B os cubos dos valores do vetor A
}
	printf("Valores da matriz B:\n");
	for(i=0;i<3;i++){
		printf("%d\n", b[i]);
	}
	printf("\nDigite o numero a ser pesquisado na matriz B: "); //Solicitar ao usuário para digitar o número para pesquisar
	scanf("%d", &n); //Ler o número digitado pelo usuário 
	for (j=0; j<3; j++){ //Laço para exibir a posição do número
		if(b[j] == n){ //Se o número atual for igual ao digitado pelo usuário
			printf("\nFoi localizado em: %d", j+1); //Exibir ao usuário a posição do número pesquisado
			encontrado =1; //Definir a variável encontrado como 1
			break; //Terminar o laço
		}
	}
		if (encontrado == 0){ //Se a variável encontrado for igual a 0
	printf("\nNumero nao encontrado."); //Exibir que o número digitado pelo usuário não foi encontrado
	}
	return 0; //Finalizar o código
}
