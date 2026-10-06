//Exercício 3: Exibir o RA com os 2 primeiros e os 2 últimos números invertidos
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int x[9]; //Declarar a variável do RA
int y[9]; //Declarar a variável do novo RA
int i; //Declarar a variável da contagem e a variável auxiliar
printf("Digite o RA: \n"); //Solicitar para o usuário digitar o RA
for(i=0; i<=8; i++){ //Laço para ler o RA. Valor inical: 0; Enquanto i for menor ou igual a 8; Incrementar 1 na variável i
scanf("%1d", &x[i]); //Ler o RA digitado pelo usuário
}
for(i = 2; i <= 6; i++) { //Laço para fazer as primeiras atribuições. Valor inicial: 2; Enquanto a variável for menor ou igual a 6; Incrementar 1 na variável i
    y[i] = x[i]; //Atribuir o valor da variável x para a variável y
}
y[0] = x[1]; //Atribuir o valor do segundo dígito do x para o primeiro dígito do y
y[1] = x[0]; //Atribuir o valor do primeiro dígito do x para o segundo dígito do y
y[7] = x[8]; //Atribuir o valor do nono dígito do x para o oitavo dígito do y
y[8] = x[7]; //Atribuir o valor do oitavo dígito do x para o nono dígito do y

printf("\nO RA novo e: "); //Exibir que os números seguintes serão o RA novo
for(i=0;i<=8;i++){ //Laço para exibir o RA nono. Posição inicial: 0; Enquanto i for menor ou igual a 8; Incrementar 1 na variável i
	printf("%i", y[i]); //Exibir os dígitos do RA novo
}
return 0; //Finalizar o código
}
