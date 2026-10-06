//Exercício 9: Números divisíveis por 4 ou 5
#include <stdio.h> //Iniciar o código

int main() {
	
	int A, B; //Identificar as variáveis
	
	printf("Digite o primeiro valor: "); //Solicitar ao usuário para que digite o primeiro valor
	scanf("%i", &A); //Ler o primeiro valor
	
	printf("Digite o segundo valor: "); //Solicitar ao usuário para que digite o segundo valor
	scanf("%i", &B); //Ler o segundo valor
	
	printf("Os valores divisíveis por 4 ou 5 sao: "); //Exibir que os números exibidos vão ser os divisíveis por 4 ou 5
	
	
	if(A % 4 == 0 || A % 5 == 0) { //Se o valor de A for divisível por 4 ou 5
		printf("%i", A); //Exibir A
	}
	
	if(B % 4 == 0 || B % 5 == 0) { //Se o valor de B for divisível por 4 ou 5
		printf(", %i", B); //Exibir o valor de B
	}
	
	return 0; //Finalizar o código
}
