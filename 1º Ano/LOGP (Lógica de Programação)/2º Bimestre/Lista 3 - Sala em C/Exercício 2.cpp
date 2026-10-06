//Exercício 2: Soma de números inteiros de 1 a 100
#include <stdio.h>//Incluir a biblioteca stdio.h

int main() { //Iniciar o código
    int cont = 0; //Declarar a variável dos números que vao ser somados
    int soma = 0; //Declarar a variável da soma dos numeros inteiros de 1 a 100

    while(cont <= 100) { //Enquanto os numeros somados forem igual ou menor que 100
        soma = soma + cont; // Atribuir para a variável soma o valor de soma somado com o próximo número inteiro
        cont++; //Incrementar 1 no número inteiro
    }

    printf("A soma de 1 a 100 e: %i\n", soma);//Exibir a soma de 1 a 100
    return 0;// Finalizar o código
}

