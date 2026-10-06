//Exercício 9: Potência de base e expoente
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
	int base, exp; //Declarar as variáveis da base e do expoente 
	int resultado = 1; //Declarar a variável do resultado e igualar ela a 1
	int cont = 1; //Declarar a variável de contador da multiplicação da base
	printf("Digite a base: "); //Solicitar para o usuário digitar a base
	scanf("%i", &base); //Ler a base
	
	printf("Digite o expoente: "); //Solicitar para o usuário digitar o expoente
	scanf("%i", &exp); //Ler o expoente
	
	while(cont <= exp) { //Enquando o contador da multiplicação for menor que o expoente
		resultado = resultado * base; //Multiplicar a base pelo resultado e atribuir ao resultado
		
		cont++; //Incrementar na variável do contador
	}
	printf("Resultado: %d", resultado); //Exibir o resultado da potência
	
	return 0; //Finalizar o código
}
