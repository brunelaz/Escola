//Exercício 5: Valores em ordem crescente
#include <stdio.h> //Iniciar o código

int main() {
	float A, B, C, auxiliar; //Identificar as variáveis
	
	printf("Digite o valor de A: "); //Solicitar o usuário para que digite o valor de A
	scanf("%f", &A); //Ler o valor de A
	
	printf("Digite o valor de B: "); //Solicitar o usuário para que digite o valor de B
	scanf("%f", &B); //Ler o valor de B
	
	printf("Digite o valor de C: "); //Solicitar o usuário para que digite o valor de C
	scanf("%f", &C); //Ler o valor de C
	
	if (A > B){ //Se A é maior que B, trocar o valor de A com B, garantindo que A seja menor que B
		auxiliar = A; //Atribuir o valor de A para a variável auxiliar
		A = B; //Atribuir o valor de B para a variável A
		B = auxiliar; //Atribuir o valor da variável auxiliar (que tem o valor original do A) para a variável B
	}
	
	if(A > C){ //Se A é maior que C, trocar os dois valores, garantindo que A seja menor que C
	auxiliar = A; //Atribuir o valor de A para a variável auxiliar
	A = C; //Atribuir o valor de C para A
	C = auxiliar; //Atribuir o valor da variável auxiliar (que tem o valor original do A) para a variável C
	}
	
	if(B > C) { //Se o valor de B é maior que o valor de C, trocar os dois valores, garantindo que B seja menor que C
	auxiliar = B; //Atribuir o valor de B para a variável auxiliar
	B = C; //Atribuir o valor de C para B
	C = auxiliar; //Atribuir o valor da variável auxiliar (que tem o valor original do B) para a variável C
	}
	
	printf("Os valores em ordem crescente sao: %.2f, %.2f, %.2f", A, B, C); //Exibir os valores em ordem crescente
	
	return 0; //Finalizar o código
	}
