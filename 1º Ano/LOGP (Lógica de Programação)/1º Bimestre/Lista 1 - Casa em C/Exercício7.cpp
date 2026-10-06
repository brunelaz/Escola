//Exercício 7: Cálculo de volume e área de esfera
#include <stdio.h>

int main() {
    //definir as variáveis
    float raio, volume, area;
//Exibir que é um calculador de volume e área de esfera
    printf("Calculador de volume e area de esferas\n");

    // Solicitar o raio da esfera
    printf("Digite o raio: ");
    scanf("%f", &raio);

    // Calcular o volume
    volume = (4.0 / 3.0) * 3.14159 * (raio * raio * raio);
    
    //Calcular a area
    area = 4 * 3.14159 * (raio * raio);

    // Exibir o volume
    printf("\nO volume e: %.2f", volume);
    
    //Exibir area
    printf("\nA area e: %.4f", area);
    
	//Finalizar o código
    return 0;
}
