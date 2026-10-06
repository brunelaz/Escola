//Exercício 5: Cálculo de IMC
#include <stdio.h>

int main() {
    //definir as variáveis
    float massa, altura, IMC;
//Exibir que é um calculador de IMC
    printf("Calculador de IMC\n");

    // Solicitar a altura e a massa do usuário
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite a massa (em kg): ");
    scanf("%f", &massa);

    // Calcular o IMC
    IMC = massa / (altura * altura);

    // Exibir o IMC do usuário
    printf("\nO imc e: %.2f", IMC);
    
	//Finalizar o código
    return 0;
}

