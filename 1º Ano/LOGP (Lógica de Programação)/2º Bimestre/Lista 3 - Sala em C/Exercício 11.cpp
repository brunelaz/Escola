//Exercício 11: Exibir o maior e o menor valor
#include <stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
int num, maior, menor; //Declarar as variáveis do número e a variável que vai armazenar o maior e o menor
int cont = 1; //Declarar a variável do contador
	while (cont <= 5) { //Enquanto a variável cont for menor ou igual a 5
	printf("Digite o %d numero: ", cont); //Pedir para o usuário digitar os números
	scanf("%d", &num); //Ler o número
	
	if (cont == 1) { //Se o contador estiver no 1
		maior = num; //Atribuir para a variável maior o valor dele
		menor = num;//Atribuir para a variável menor o valor dele
	}
	else{ //Se não

	if(num > maior) { //Se o número for maior que o atual maior
	maior = num; //Este número se torna o maior
	}
	if (num < menor){ //Se o número for menor que o atual menor
	menor = num; //Este número se torna o menor
	}
}
	cont++; //Incrementar 1 na variável do contador
}
	printf("\nMaior numero: %d", maior);//Exibir o maior número
	printf("\nMenor numero: %d", menor);//Exibir o menor número
	
	return 0; //Finalizar o código
}
