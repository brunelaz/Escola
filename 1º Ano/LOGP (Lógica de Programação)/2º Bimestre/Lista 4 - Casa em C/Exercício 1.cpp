//Exercício 1: Exibir o RAC a partir do RAV
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int x[9]; //Declarar a variável do RAV
int y[9]; //Declarar a variável do RAC
int i; //Declarar a variável da contagem
printf("Digite o RAV: \n"); //Solicitar para o usuário digitar o RAV
for(i=0; i<=8; i++){ //Laço para ler o RAV. Valor inical: 0; Enquanto i for menor ou igual a 8; Incrementar 1 na variável i
scanf("%1d", &x[i]); //Ler o RAV digitado pelo usuário
}
y[0] = x[0]; //Atribuir o valor do primeiro dígito do x para o primeiro dígito do y
y[1] = x[1]; //Atribuir o valor do segundo dígito do x para o segundo dígito do y
y[2] = x[7]; //Atribuir o valor do oitavo dígito do x para o terceiro dígito do y
y[3] = x[6]; //Atribuir o valor do sétimo dígito do x para o quarto dígito do y
y[4] = x[4]; //Atribuir o valor do quinto dígito do x para o quinto dígito do y 
y[5] = x[5]; //Atribuir o valor do sexto dígito do x para o sexto dígito do y
y[6] = x[2]; //Atribuir o valor do terceiro dígito do x para o  sétimo dígito do y
y[7] = x[3]; //Atribuir o valor do quarto dígito do x para o oitavo dígito do y 
y[8] = x[8]; //Atribuir o valor do nono dígito do x para o nono dígito do y
printf("\nO RAC e: "); //Exibir que os números seguintes serão o RAC
for(i=0;i<=8;i++){ //Laço para exibir o RAC. Posição inicial: 0; Enquanto i for menor ou igual a 8; Incrementar 1 na variável i
	printf("%i", y[i]); //Exibir os dígitos do RAC
}
return 0; //Finalizar o código
}

