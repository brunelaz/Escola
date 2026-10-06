//Exercício 5: Determinar e exibir a maior palavra em uma frase de até 200 caracteres
#include<stdio.h> //Incluir a biblioteca stdio.h
#include<string.h> //Incluir a biblioteca string.h para usar comandos de texto
int main(){ //Iniciar o código
	char f[201], pal_atual[50], maior_pal[50]; //Declarar as variáveis de cadeia de caractéres
	int i, j=0, tam_atual=0, max=0; //Declarar as variáveis inteiras
	printf("Digite uma frase: "); //Solicitar ao usuário para digitar a frase
	fgets(f, 201, stdin); //Ler a frase digitada pelo usuário incluindo os espaços
	for(i=0; f[i]!='\0'; i++){ //Laço para percorrer a string ate encontrar o final do texto
		if(f[i]!=' ' && f[i]!='\n' && f[i]!='\0'){ //Verificar se o caractere atual faz parte de uma palavra
			pal_atual[j] = f[i]; //Atribuir o caractere da frase para a posição j da palavra atual
			j = j + 1; //Incrementar 1 na variável j do índice da palavra
			tam_atual = tam_atual + 1; //Incrementar 1 na contagem de tamanho da palavra atual
		}
		else{ //Se o caractere atual for um espaço ou final da frase
			if(tam_atual > 0){ //Verificar se existe uma palavra armazenada para validar
				pal_atual[j] = '\0'; //Adicionar o finalizador de texto na palavra atual
				if(tam_atual > max){ //Se o tamanho da palavra atual for maior que o tamanho máximo registrado
					max = tam_atual; //Atribuir o valor de tam_atual para a variável max
					strcpy(maior_pal, pal_atual); //Comando para copiar o texto de pal_atual para a maior_pal
				}
				j = 0; //Atribuir o valor 0 para reiniciar o índice da palavra atual
				tam_atual = 0; //Atribuir o valor 0 para reiniciar a contagem de letras da palavra
			}
		}
	}
	printf("\nA maior palavra encontrada e: %s\n", maior_pal); //Exibir ao usuário a maior palavra da frase
	printf("Quantidade de letras: %i\n", max); //Exibir ao usuário a quantidade de letras da maior palavra
	return 0; //Finalizar o código
}
