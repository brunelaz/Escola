//Exercício 8: Exibir a série de Fibonacci até o 15 termo
#include <stdio.h> //Incluir a biblioteca stdio.h

int main() { //Iniciar o código
    int termo = 1;// Declarar a variável do contador para parar no 15 termo
    int atual = 1;// Declarar a variável do Primeiro termo da série
    int anterior = 0;// Declarar a variável do valor que vem antes do primeiro 
    int proximo; // Declarar a variável auxiliar para calcular a soma

    while (termo <= 15) { //Enquanto o termo da série for menor ou igual a 15
        printf("%d termo: %d\n", termo, atual); //Exibir o termo

        proximo = atual + anterior;// Atribuir para a variável próximo o valor da soma da atual com a anterior
        anterior = atual; // Atribiuir para a variável anterior o antigo atual
        atual = proximo;// Atribuir para a variável atual a soma calculada 

        termo++; // Incrementar o contador de termos
    }
 
    return 0; //Finalizar o código
}
