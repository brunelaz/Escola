	//Exercício 6: Cálculo de equação de segundo grau
	#include <stdio.h>
	#include <math.h> //Iniciar o código com math para calcular raiz quadrada

	int main() {

	float A, B, C, delta, x1, x2; //Declarar as variáveis
	
	printf("Digite o valor de A: ");//Solicitar o usuário para que digite o valor de A
	scanf("%f", &A);//Ler o valor de A
	
	printf ("Digite o valor de B: ");//Solicitar o usuário para que digite o valor de B
	scanf("%f", &B);//Ler o valor de B
	
	printf("Digite o valor de C: ");//Solicitar o usuário para que digite o valor de C
	scanf("%f", &C);//Ler o valor de C
	
	delta = (B * B) - 4 * A * C; //Calcular o valor de delta fazendo a fórmula de b ao quadrado menos 4 multiplicado por A multiplicado por C
	
	if (delta < 0.0) {
		printf("O valor de delta e invalido");
	}
	else {
	x1 = ( -B + sqrt(delta) ) / ( 2 * A ) ; //Calcular o primeiro valor do X usando a fórmula da equação de segundo grau
	
	x2 = ( -B - sqrt(delta) ) / ( 2 * A );//Calcular o segundo valor do X usando a fórmula da equação de segundo grau
	
	printf("Os valores de X sao: %.2f, %.2f", x1, x2); //Exibir os dois valores de X
}
	return 0; // Finalizar o código
}
