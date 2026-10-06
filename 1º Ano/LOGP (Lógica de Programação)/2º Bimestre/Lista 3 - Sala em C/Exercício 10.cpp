//Exercício 10: Somatória dos valores pares de 1 a 500
#include <stdio.h> //Incluir a biblioteca stdio.h
int main(){ //Iniciar o código
int cont = 2; //Declarar a variável cont e igualar ela a 2
int soma =  0; //Declarar a variável da soma de todos os números e igualar a 0
while (cont <= 500) { //Enquanto a variável cont for menor ou igual a 500
	soma = soma + cont; //Atribuir para a variável soma o valor dela mesma mais o valor da variável cont
	cont = cont + 2; //Incrementar 2 na variável cont
}
printf("A soma dos valores pares de 1 a 500 é: %d", soma); //Exibir o resultado da soma
return 0; //Finalizar o código
}
