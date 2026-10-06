//Exercício 1: Exibir todos os números impares de 1 a 20
#include <stdio.h> //Incluir biblioteca stdio
int main() { //Iniciar o código
	int cont = 0; // Declarar a variável cont e igualar a 0
	while(cont<=20){ // Enquanto a variável cont for menor ou igual a 20
		if(cont%2 == 1) //Se a variável cont for ímpar
		printf("%d\n", cont); //Exibir a variável
		cont = cont+1; //Incrementar 1 na variável cont
		
		}
		return 0; //Finalizar o código
	}

