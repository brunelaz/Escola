//Exercício 6: Exibir o quadrado dos numeros inteiros de 15 a 200
#include <stdio.h> //Incluir a biblioteca stdio.h
int main(){
int cont = 15; //Declarar a variável e atribuir a ela o valor 15
int resp; //Declarar a variável das respostas dos quadrados

while (cont <= 200) { //Enquanto a variável cont for menor ou igual a 200
	resp = (cont * cont); //Atribuir para a variável resposta o quadrado da variável cont
	printf("%d\n", resp); //Exibir os quadrados
	cont++; //Incrementar na variável cont
}
return 0; //Finalizar o código
}
