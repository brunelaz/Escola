//Exercício 9: Cálculo de Média
#include <stdio.h>

int main() {
    //definir as variáveis
    float P1, P2, Ativ, soma, media;
    
	//Exibir que é um calculador de média 
    printf("Calculador de media\n");

    // Solicitar as notas da primeira prova
    printf("Digite a nota da prova 1: ");
    scanf("%f", &P1);

    // Solicitar a nota da segunda prova
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &P2);
    
	// Solicitar a nota das atividade do semestre
    printf("Digite a nota das atividades do semestre: ");
    scanf("%f", &Ativ);
    
    // Calcular a soma e as multiplicações das notas
    soma = (P1 * 4) + (P2 * 4) + (Ativ * 2);
    
    //Calcular a média
    media = soma / 10;

    // Exibir a média
    printf("\nA media e: %.2f", media);
    
	//Finalizar o código
    return 0;
}
