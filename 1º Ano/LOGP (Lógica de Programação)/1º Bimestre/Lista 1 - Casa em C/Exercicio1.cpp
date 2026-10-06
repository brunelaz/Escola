//Exercício 1: Conversor de reais para dólares (Considerando que o dólar esteja em 2.40 reais)
#include <stdio.h>

int main() {
    //definir as variáveis
    float reais, dolares;
    float taxa = 2.40;
	//Exibir que é um conversor de moedas
    printf("Conversor de Moeda (Reais para Dolares)\n");

    // Pedir para o usuário digitar o valor em reais
    printf("Digite o valor em Reais: ");
    //Ler o valor em reais
    scanf("%f", &reais);

	//Calcular a conversão de reais para dólares
    dolares = reais / taxa;

    // Exibir o resultado da conversão para dólares
    printf("O valor em Dolares e: US$ %.2f\n", dolares);
	//Finalização do código
    return 0;
}

