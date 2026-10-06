//Exercício 2: Fatoriais dos números
#include <stdio.h> // Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int a[6], b[6], i, x; //Declarar as variáveis dos vetores e a variável comum
printf("Digite os valores do vetor: \n"); //Solicitar ao usuário para digitar os números
for (i = 0; i<6; i++){ //Valor inicial do i: 0; Enquanto a variável for menor que 6; incrementar na variável i
	scanf("%i", &a[i]); //Ler os valores digitados pelo usuário
	b[i] = 1; //Atribuir 1 que é o valor inicial para a variável 
	for (x = 1; x<= a[i]; x++){ //Valor inicial: 1;  enquanto o x for menor que os valores digitados pelo usuário; Incrementar na variável x
		b[i] = b[i] * x; //Atribuir para o segundo vetor o valor dele mesmo multiplicado pelo x
	}
}
	printf("Os fatoriais sao: \n"); //Exibir que os números seguintes serão os resultados do segundo 
	for(i=0; i<6; i++){ //Valor inicial: 0; Enquanto a variável for menor que 6; incrementar na variável i
		printf("%i ", b[i]); //Exibir os resultados
	}
	return 0; //Finalizar o código
}
