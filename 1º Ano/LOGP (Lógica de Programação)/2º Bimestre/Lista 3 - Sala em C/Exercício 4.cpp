//Exercício 4: Exibir o valor obtido da multiplicação sucessiva de um número por 3 
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
    int n; // Declarar a variável do número

    printf("Digite um numero menor ou igual a 50: "); //Solicitar ao usuário que digite um número menor ou igual a 50
    scanf("%i", &n); //Ler o valor
    
    if (n <= 50) {// Se o valor for menor ou igual a 50
        printf("Resultados: %i ", n); // Exibe o valor inicial

        while (n * 3 < 250) { //Enquanto o resultado for menor que 250
            n = n * 3; // Atribuir para a variável o valor multiplicado por 3
            printf("%i ", n); // Exibir o resultado
        }
    } else { //Se o número for maior que 50 
        printf("O numero digitado e maior que 50.");//Exibir que o número é maior que 50
    }

    return 0; // Finalizar o código
}

