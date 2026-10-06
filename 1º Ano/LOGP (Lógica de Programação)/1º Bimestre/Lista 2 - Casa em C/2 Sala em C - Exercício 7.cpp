//Exercício 7: Exibir o valor positivo
#include <stdio.h> //Iniciar o código

int main() {
	float num, numpositivo; //Identificar as variáveis
	
	printf("Digite um valor: "); //Solicitar o usuário para que digite um número
	scanf("%f", &num); //Ler o número
	
	if (num < 0) { //Se o numero digitado for menor que 0
	numpositivo = num * -1; //Atribuir o valor do numero multiplicado por -1 para o resultado
	printf("O numero positivo e: %.2f", numpositivo); //Exibir o resultado do numero positivo
	}
	else { //Se o numero digitado for maior que 0
		printf("O numero positivo e: %.2f", num); //Exibir o número
	}
	return 0; //Finalizar o código
}
