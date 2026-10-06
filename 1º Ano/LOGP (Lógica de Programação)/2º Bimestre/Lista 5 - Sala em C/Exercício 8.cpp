//Exercício 8: Armazenar as notas de 4 alunos, exibi-las em ordem crescente e fazer rotina de pesquisa
#include <stdio.h> //Incluir biblioteca stdio.h
int main(){//Iniciar o código
int nota[4], x, i, j, n, encontrado=0; //Identificar as variáveis
for(i=0;i<4;++i){ //Laço para ler as notas dos alunos
	printf("Digite a nota do aluno: ");
	scanf("%d", &nota[i]); //Ler os valores digitados pelo usuário
}
	for (i=0; i<4; i++){ //Laço para fazer o bubble sort 
    for (j=i+1; j<4; j++){ //Laço para fazer o bubble sort 
        if(nota[i] > nota[j]){ //Se o vetor i for maior que o j
            x = nota[i]; //Atribuir o valor da nota no vetor i para a variável x
            nota[i] = nota[j]; //Atribuir o valor da nota no vetor j para a variável da nota no vetor i
            nota[j] = x; //Atribuir o valor da variável x para a variável da nota no vetor j
            }
        }
    }
    printf("Notas em ordem crescente:\n");//Exibir ao usuário que os próximos números serão os números das notas em ordem crescente
    for(i=0;i<4;i++){ //Laço para exibir os valores
    	printf("%d\n", nota[i]);//Exibir os valores ao usuário
	}
	printf("\nDigite a nota a ser pesquisada: "); //Solicitar ao usuário para digitar a nota para pesquisar
	scanf("%d", &n); //Ler o número digitado pelo usuário 
	for (j=0; j<4; j++){ //Laço para exibir a posição do número
		if(nota[j] == n){ //Se o número atual for igual ao digitado pelo usuário
			printf("\nFoi localizado em: %d", j+1); //Exibir ao usuário a posição do número pesquisado
			encontrado =1; //Definir a variável encontrado como 1
			break; //Terminar o laço
		}
	}
		if (encontrado == 0){ //Se a variável encontrado for igual a 0
	printf("\nNumero nao encontrado."); //Exibir que a nota digitada pelo usuário não foi encontrado
	}
	return 0; //Finalizar o código	
}
