//Exercício 7: Somar os elementos com 2 e colocar em ordem crescente e criar rotina para pesquisa
#include <stdio.h> //Incluir biblioteca stdio.h
int main(){//Iniciar o código
int a[2], b[2], x, i, j, n, encontrado=0; //Identificar as variáveis
printf("Digite os valores da matriz A: \n");  //Solicitar para o usuário digitar os valores da matriz A
for(i=0;i<2;++i){ //Laço para ler os valores da matriz A
	scanf("%d", &a[i]); //Ler os valores digitados pelo usuário
}
for(i=0;i<2;++i){ //Laço para atribuir a matriz A somada com 2 para a matriz B
b[i] = a[i] + 2; //Atribuir os valores da matriz A somada com 2 para a matriz B
}
	for (i=0; i<2; i++){ //Laço para fazer o bubble sort 
    for (j=i+1; j<2; j++){ //Laço para fazer o bubble sort 
        if(b[i] > b[j]){ //Se o vetor i for maior que o j
            x = b[i]; //Atribuir o valor de b no vetor i para a variável x
            b[i] = b[j]; //Atribuir o valor de b no vetor j para a variável do b no vetor i
            b[j] = x; //Atribuir o valor da variável x para a variável do b no vetor j
            }
        }
    }
    printf("Valores da matriz B em ordem crescente:\n");//Exibir ao usuário que os próximos números serão os números da matriz B em ordem crescente
    for(i=0;i<2;i++){ //Laço para exibir os valores
    	printf("%d\n", b[i]);//Exibir os valores ao usuário
	}
	printf("\nDigite o numero a ser pesquisado na matriz B: "); //Solicitar ao usuário para digitar o número para pesquisar
	scanf("%d", &n); //Ler o número digitado pelo usuário 
	for (j=0; j<2; j++){ //Laço para exibir a posição do número
		if(b[j] == n){ //Se o número atual for igual ao digitado pelo usuário
			printf("\nFoi localizado em: %d", j+1); //Exibir ao usuário a posição do número pesquisado
			encontrado =1; //Definir a variável encontrado como 1
			break; //Terminar o laço
		}
	}
		if (encontrado == 0){ //Se a variável encontrado for igual a 0
	printf("\nNumero nao encontrado."); //Exibir que o número digitado pelo usuário não foi encontrado
	}
	return 0; //Finalizar o código	
}
