//Exercício 12: Calculo de velocidade de veículo
#include <stdio.h>

int main() {
    //definir as variáveis
    float tempogasto, espacopercorrido, velocidademedia;
    
	//Exibir que é um calculador de velocidade média
    printf("Calculador de velocidade media de veiculo\n");

    // Solicitar o tempo gasto
    printf("Digite o tempo gasto: ");
    scanf("%f", &tempogasto);

    // Solicitar o espaço percorrido
    printf("Digite o espaco percorrido: ");
    scanf("%f", &espacopercorrido);
    
    // Calcular a velocidade média
    velocidademedia = espacopercorrido / tempogasto;
    
    // Exibir os valores trocados
	printf("\nA velocidade media e: %.2f\n", velocidademedia);
    
	//Finalizar o código
    return 0;
}
