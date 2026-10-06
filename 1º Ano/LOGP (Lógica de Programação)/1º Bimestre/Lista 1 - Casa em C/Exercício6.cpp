//Exercício 6: Cálculo de comprimento e área
#include <stdio.h>

int main() {
    //definir as variáveis
    float raio, area, comprimento;
//Exibir que é um calculador de raio e comprimento de circunfêrencias
    printf("Calculador de area e comprimento de circunferencias\n");

    // Solicitar o raio da circunferência
    printf("Digite o raio: ");
    scanf("%f", &raio);

    // Calcular a área
    area = 3.14159 * (raio * raio);
    
    //Calcular o comprimento
    comprimento = 2 * 3.14159 * raio;

    // Exibir a área
    printf("\nA area e: %.2f", area);
    
    //Exibir o comprimento
    printf("\nO comprimento e: %.4f", comprimento);
    
	//Finalizar o código
    return 0;
}
