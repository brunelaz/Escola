//Exercício 4: Cálculo área e perímetro de retângulo,
#include <stdio.h>

int main() {
    //definir as variáveis
    float base, altura, perimetro, area;
	//Exibir que é um calculador de área e perímetro de retângulo
    printf("Calculador de Perimetro e Area de retangulo\n");

    // Solicitar a altura e a largura do retângulo para o usúario e ler essas informações
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    printf("Digite o tamanho da base do retangulo: ");
    scanf("%f", &base);

    // Calcular a área do retângulo multiplicando a base pela altura
    area = base * altura;
    // Calcular o perímetro do retângulo somando todos os lados
    perimetro = base*2 + altura*2;

    // Exibir a área do retângulo
    printf("\nArea do retangulo: %.2f", area);
    //Exibir o perímetro do azulejo
    printf("\nPerimetro do retangulo: %.4f", perimetro);
	//Finalizar o código
    return 0;
}
