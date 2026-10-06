//Exercício 2: Exibir o RA com os 4 últimos dígitos invertidos
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int x[9]; //Declarar a variável do RA
int y[9]; //Declarar a variável do novo RA
int i; //Declarar a variável da contagem
printf("Digite o RA: \n"); //Solicitar para o usuário digitar o RA
for(i=0; i<=8; i++){ //Laço para ler o RA. Valor inical: 0; Enquanto i for menor ou igual a 8; Incrementar 1 na variável i
scanf("%1d", &x[i]); //Ler o RA digitado pelo usuário
}
for(i = 0; i <= 4; i++) { //Laço para fazer as primeiras atribuições. Valor inicial: 0; Enquanto a variável for menor ou igual a 4; Incrementar 1 na variável i
    y[i] = x[i]; //Atribuir o valor da variável x para a variável y
}
y[5] = x[8]; //Atribuir o valor do nono dígito do x para o sexto dígito do y
y[6] = x[7]; //Atribuir o valor do oitavo dígito do x para o sétimo dígito do y
y[7] = x[6]; //Atribuir o valor do sétimo dígito do x para o oitavo dígito do y
y[8] = x[5]; //Atribuir o valor do sexto dígito do x para o nono do y

printf("\nO RA novo e: "); //Exibir que os números seguintes serão o RA novo
for(i=0;i<=8;i++){ //Laço para exibir o RA nono. Posição inicial: 0; Enquanto i for menor ou igual a 8; Incrementar 1 na variável i
	printf("%i", y[i]); //Exibir os dígitos do RA novo
}
return 0; //Finalizar o código
}

