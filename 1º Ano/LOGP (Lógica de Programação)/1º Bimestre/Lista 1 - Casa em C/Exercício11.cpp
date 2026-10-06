//Exercício 11: Troca de Valores sem usar uma terceira variável
#include <stdio.h>

int main() {
    //definir as variáveis
    float a, b;
    
	//Exibir que é um programa feito para troca de valores
    printf("Troca de valores\n");

    // Solicitar o valor A
    printf("Digite o valor A: ");
    scanf("%f", &a);

    // Solicitar o valor B
    printf("Digite o valor B: ");
    scanf("%f", &b);
    
    // Calcular a troca de valores
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Exibir os valores trocados
	printf("\nOs valores trocados sao: %.2f %.2f\n", a, b);
    
	//Finalizar o código
    return 0;
}
