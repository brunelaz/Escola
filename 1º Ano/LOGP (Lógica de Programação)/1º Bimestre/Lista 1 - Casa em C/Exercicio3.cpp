//Exercício 3: Cálculo de azulejos e paredes,
#include <stdio.h>

int main() {
    //definir as variáveis, sendo AP: Altura da Parede, LP: Largura da parede, AA:Altura do Azulejo, LA: Largura do azulejo
    float AP, LP, AA, LA;
    float areaParede, areaAzulejo, quantidade;
	//Mostrando que é um calculador de parede e azuljo
    printf("Calculador de Azulejos e Paredes\n");

    // Pedir a largura e a altura da parede
    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &AP);
    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &LP);

    // Pedir a largura do azulejo na mesma unidade de medida que a da parede foi solicitada
    printf("Digite a altura do azulejo (em metros): ");
    scanf("%f", &AA);
    printf("Digite a largura do azulejo (em metros): ");
    scanf("%f", &LA);

    // Calcular a área da parede multiplicando a altura pela largura
    areaParede = AP * LP;
    // Calcular a área do azulejo multiplicando a altura pela largura
    areaAzulejo = AA * LA;
    
    // Calcular a quantidade de azulejos dividindo a area da parede pela área dos azulejos
    quantidade = areaParede / areaAzulejo;

    // Exibir a área da parede
    printf("\nArea da parede: %.2f m2", areaParede);
    //Exibir a área do azulejo
    printf("\nArea do azulejo: %.4f m2", areaAzulejo);
    //Exibir a quantidade de azulejos que precisam
    printf("\n Precisarao de %.1f azulejos.\n", quantidade);
	//Finalizar o código
    return 0;
}
