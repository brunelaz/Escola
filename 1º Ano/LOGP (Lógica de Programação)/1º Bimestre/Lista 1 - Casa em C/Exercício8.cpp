//Exercício 8: Cálculo de Média de Aluno
#include <stdio.h>

int main() {
    //definir as variáveis
    float nota1, nota2, nota3, nota4, soma, media;
	//Exibir que é um calculador de média 
    printf("Calculador de media\n");

    // Solicitar a primeira nota
    printf("Digite a nota do primeiro bimestre: ");
    scanf("%f", &nota1);

    // Solicitar a segunda nota
    printf("Digite a nota do segundo bimestre: ");
    scanf("%f", &nota2);
    
		// Solicitar a terceira nota
    printf("Digite a nota do terceiro bimestre: ");
    scanf("%f", &nota3);
    
        // Solicitar a quarta nota
    printf("Digite a nota do quarto bimestre: ");
    scanf("%f", &nota4);
    
    // Calcular a soma das 4 notas
    soma = nota1 + nota2 + nota3 + nota4;
    
    //Calcular a média
    media = soma / 4;

    // Exibir a média
    printf("\nA media e: %.2f", media);
    
	//Finalizar o código
    return 0;
}
