//Exercício 2: Conversor de dólares para reais (Considerando que o dólar esteja em 2.40 reais)
#include <stdio.h>

int main() {
    //definir as variáveis
    float reais, dolares;
    float taxa = 2.40;
	//Exibir que é um conversor de moedas
    printf("Conversor de Moeda (Dolares para Reais)\n");

    // Pedir para o usuário digitar o valor em reais
    printf("Digite o valor em Dolares: ");
    //Ler o valor em reais
    scanf("%f", &dolares);

	//Calcular a conversão de dólares para reais
    reais = dolares * taxa;

    // Exibir o resultado da conversão para dólares
    printf("O valor em Reais e: R$ %.2f\n", reais);
	//Finalização do código
    return 0;
}
