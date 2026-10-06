//Exercício 8: Exibir os números que são divisíveis por 2 e 3
#include <stdio.h> //Iniciar o código

int main() {
	int  A, B, C; //Identificar as variáveis
	
	printf("Digite o primeiro valor: "); //Solicitar o usuário para que digite o primeiro valor
	scanf("%i", &A); //Ler o primeiro valor
	
	printf("Digite o segundo valor: "); //Solicitar o usuário para que digite o segundo valor
	scanf("%i", &B); //Ler o segundo valor
	
	printf("Digite o terceiro valor: "); //Solicitar o usuário para que digite o terceiro valor
	scanf("%i", &C); //Ler o terciero valor
	
	printf("Os valores divisiveis por 2 e por 3 sao: ");
	
	if(A % 2 == 0 && A % 3 == 0) { //Se o valor A for divisível por 2 ou 3
		printf("%d", A); // Exibir o valor de A
	}	
	if(B % 2 == 0 && B % 3 == 0) { //Se o valor B for divisível por 2 ou 3
		printf(", %d", B); // Exibir o valor de B
	}
	if(C % 2 == 0 && C % 3 == 0) { //Se o valor C for divisível por 2 ou 3
		printf(", %d", C); // Exibir o valor de C
	}
	return 0; //Finalizar o código
}
