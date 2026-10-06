//Exercício 13: Calculo de velocidade de veículo
#include <stdio.h>

int main() {
    //definir as variáveis
    float s0 = 2.0;
    float v0 = 3.0;
    float a = 10.0;
    float t, s;
    
	//Exibir que é um calculador de posição no MUV
    printf("Calculador de posição no Movimento Uniformemente Variado\n");

    // Solicitar o tempo para o usuário
    printf("Digite o tempo (em segundos): ");
    scanf("%f", &t);
    
    // Calcular os metros usando a fórmula
    s = s0 + (v0 * t) + (0.5 * a *(t * t));
    
    // Exibir o resultado
	printf("\nO valor de metros e: %.2f\n", s);
    
	//Finalizar o código
    return 0;
}
