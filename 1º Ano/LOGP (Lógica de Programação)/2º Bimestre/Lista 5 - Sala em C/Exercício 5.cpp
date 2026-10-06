//Exercício 5: Juntar 2 matrizes em uma e exibir de forma decrescente
#include <stdio.h>//Incluir a biblioteca stdio.h
int main(){//Iniciar o código
int a[2], b[3], c[5], i, j, x;//Declarar as variáveis
printf("Digite os valores da matriz A:\n");//Solicitar para o usuário digitar os valores da matriz A
for(i=0; i<2; ++i){//Laço para ler os valores da matriz A
scanf("%d", &a[i]);//Ler os valores digitados pelo usuário
}
printf("Digite os valores da matriz B:\n"); //Solicitar para o usuário digitar os valores da matriz B
for(i=0;i<3;++i){ //Laço para ler os valores da matriz B
scanf("%d", &b[i]);//Ler os valores digitados pelo usuário
}
c[0] = a[0]; //Atribuir o primeiro dígito da matriz A para o primeiro dígito da matriz C
c[1] = a[1]; //Atribuir o segundo dígito da matriz A para o segundo dígito da matriz C
c[2] = b[0]; //Atribuir o primeiro dígito da matriz B para o terceiro dígito da matriz C
c[3] = b[1]; //Atribuir o segundo dígito da matriz B para o quarto dígito da matriz C
c[4] = b[2]; //Atribuir o terceiro dígito da matriz B para o quinto dígito da matriz C

for (i=0; i<=4; i++){ //Laço para fazer o bubble sort
	for (j=i+1; j<=4; j++){ //Laço para fazer o bubble sort
		if(c[i] < c[j]){ //Se o número da posição i no vetor for menor que o da posição j
			x = c[i]; //Atribuir o valor da posição i para a variável x
			c[i] = c[j]; //Atribuir o valor da posição j para a posição i
			c[j] = x; //Atribuir o valor da variável x para a posição j
		}
	}
}
printf("Todos os numeros em ordem decrescente: \n"); //Exibir ao usuário que os próximos números serão todos em ordem decrescente
for(i=0;i<5;i++){ //Laço para exibir os números
	printf("%d\n", c[i]); //Exibir os valores da matriz C para o usuário
}
return 0; //Finalizar o código
}
