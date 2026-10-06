//Exercício 3: Exibir os fatoriais em ordem crescente
#include<stdio.h> //Incluir a biblioteca stdio.h

int main() { //Iniciar o código
    long long a[15], b[15], x, fat; //Declarar as variáveis 
    int i, j; //Declarar as variáveis de contador

    for (i=0; i<15; i++){ //Laço para ler os valores
        printf("Digite um numero: "); //Solicitar ao usuário para digitar os valores
        scanf("%lld", &a[i]); //Ler os valores digitados pelo usuário 
    }

    for (i=0; i<15; i++) { //Laço para percorrer o vetor A
        fat = 1; //Reiniciar o valor do fatorial para cada elemento
        for (j = 1; j <= a[i]; j++) { //Laço para calcular o fatorial do número atual
            fat = fat * j; //Multiplicar o valor acumulado pelo próximo número
        }
        b[i] = fat; //Atribuir o resultado do fatorial ao vetor B
    }
        
    for (i=0; i<14; i++){ //Laço para fazer o bubble sort 
        for (j=i+1; j<15; j++){ //Laço para fazer o bubble sort 
            if(b[i] > b[j]){ //Se o vetor i for maior que o j
                x = b[i]; //Atribuir o valor de b no vetor i para a variável x
                b[i] = b[j]; //Atribuir o valor de b no vetor j para a variável do b no vetor i
                b[j] = x; //Atribuir o valor da variável x para a variável do b no vetor j
            }
        }
    }

    printf("\nFatoriais ordenado em ordem crescente:\n "); //Exibir ao usuário que os próximos números serão ordenados em ordem crescente
    for (j=0; j<15; j++){ //Laço para exibir os números em ordem crescente 
        printf("%lld \n", b[j]); //Exibir os números em ordem crescente            
    }

    return 0; //Finalizar o código
}
