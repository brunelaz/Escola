//Exercício 3: Diferença de valores
#include<stdio.h> //Iniciar o código

int main() {
	float primeirovalor, segundovalor, diferenca; //Identificar as variáveis
	
	printf("Digite o valor A: "); //Solicitar o usuário para que digite o primeiro valor
	scanf("%f", &primeirovalor); //Ler o primeiro valor
	
	printf("Digite o valor B: "); //Solicitar o usuário para que digite o segundo valor
	scanf("%f", &segundovalor); //Ler o segundo valor
	
	if(primeirovalor > segundovalor) { //Se o primeiro valor for maior que o segundo valor
	diferenca = primeirovalor - segundovalor; //A diferença vai ser o primeiro valor subtraido pelo segundo valor
	}
	else{ //Se o segundo valor for maior que o primeiro valor
	diferenca = segundovalor - primeirovalor; //A diferença vai ser o segundo valor subtraído pelo primeiro valo
	}
	
	printf("A diferenca entre os dois valores e: %.2f", diferenca); //Exibir a diferença entre os dois valores
	
	return 0; //Finalizar o código
	
}	
