//Exercício 4: Exibir se o triângulo é equilatero, isósceles ou escaleno
#include <stdio.h> //Iniciar o código

int main() {
	float A, B, C; //Identificar as variáveis
	
	printf("Digite o valor do primeiro lado do triangulo: "); //Solicitar ao usuário para entrar com o primeiro valor
	scanf("%f", &A); //Ler o primeiro valor
	
	printf("Digite o valor do segundo lado do triangulo: "); //Solicitar ao usuário para entrar com o segundo valor
	scanf("%f", &B); //Ler o segundo valor
	
	printf("Digite o valor do terceiro lado do triangulo: "); //Solicitar ao usuário para entrar com o terceiro valor
	scanf("%f", &C); //Ler o terceiro valor
	if ((A < B + C) && (B < A + C) && (C < A + B)) { // Verificar se os lados formam um triangulo vendo se a medida de cada um dos lados é menor que a soma das medidas dos outros dois lados
	
        
        if (A == B && B == C) { //Se o triângulo for equilátero
            printf("\nO triangulo e EQUILATERO.\n"); //Exibir que o triângulo é equilátero
        }
        else if (A != B && B != C && A != C) { //Se o triângulo for escaleno
            printf("\nO triangulo e ESCALENO.\n"); //Exibir que o triângulo é escaleno
        }
        else { //Se nao é nenhum dos dois
            printf("\nO triangulo e ISOSCELES.\n"); //Exibir que o triângulo é isósceles
        }

    } else { //Se nao for nenhum dos 3
        printf("\nOs valores nao formam um triangulo.\n"); //Exibir que os valores nao formam um triangulo
    }

    return 0; //Finalizar o código
}
