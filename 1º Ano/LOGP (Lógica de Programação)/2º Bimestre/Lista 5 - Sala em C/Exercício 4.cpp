//Exercício 4: Ler 2 elementos de 2 matrizes somar e exibir em ordem crescente
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int a[12], b[12], c[12], i, j, x; //Declarar as variáveis
printf("Digite os valores da matriz A: \n"); //Solicitar para o usuário digitar os valores da matriz A
for(i=0;i<12;i++){ //Laço para ler os valores
	scanf("%d", &a[i]); //Ler os valores digitados pelo usuário
}
    for (i=0; i<12; i++){ //Laço para fazer o bubble sort 
        for (j=i+1; j<12; j++){ //Laço para fazer o bubble sort 
            if(a[i] > a[j]){ //Se o vetor i for maior que o j
                x = a[i]; //Atribuir o valor de a no vetor i para a variável x
                a[i] = a[j]; //Atribuir o valor de a no vetor j para a variável do a no vetor i
                a[j] = x; //Atribuir o valor da variável x para a variável do a no vetor j
            }
        }
    }
printf("\nDigite os valores da matriz B: \n"); //Solicitar para o usuário digitar os valores da matriz B
for(i=0;i<12;i++){ //Laço para ler os valores
	scanf("%d", &b[i]); //Ler os valores digitados pelo usuário
}
    for (i=0; i<12; i++){ //Laço para fazer o bubble sort 
        for (j=i+1; j<12; j++){ //Laço para fazer o bubble sort 
            if(b[i] > b[j]){ //Se o vetor i for maior que o j
                x = b[i]; //Atribuir o valor de b no vetor i para a variável x
                b[i] = b[j]; //Atribuir o valor de b no vetor j para a variável do b no vetor i
                b[j] = x; //Atribuir o valor da variável x para a variável do b no vetor j
            }
        }
    }
	for (i=0; i<12; i++){ //Laço para atribuir para o vetor c  a soma dos dois vetores
	c[i] = a[i] + b[i];	 //Fazer as atribuições
}
	for (i=0; i<12; i++){ //Laço para fazer o bubble sort 
        for (j=i+1; j<12; j++){ //Laço para fazer o bubble sort 
            if(c[i] > c[j]){ //Se o vetor i for maior que o j
                x = c[i]; //Atribuir o valor de c no vetor i para a variável x
                c[i] = c[j]; //Atribuir o valor de c no vetor j para a variável do c no vetor i
                c[j] = x; //Atribuir o valor da variável x para a variável do c no vetor j
            }
        }
    }
    
    printf("\nValores em ordem crescente:\n"); //Exibir que os próximos valores serão os números em ordem crescente
    for (i=0; i<12; i++){ //Laço para exibir o vetor
    	printf("%d\n", c[i]); //Exibir os valores da matriz C
}
return 0; //Finalizar o código
}
