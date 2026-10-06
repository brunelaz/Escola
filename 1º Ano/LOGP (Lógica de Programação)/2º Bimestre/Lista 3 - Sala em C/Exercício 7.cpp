//Exercício 7: Exibir as potências de 3 variando de 0 a 15
#include <stdio.h> //Incluir a biblioteca stdio.h
#include <math.h> //Incluir a biblioteca math.h
int main() { //Iniciar o código
int exp = 0; //Declarar a variável dos expoentes
int resp; //Declarar a variável das respostas 
while (exp <= 15){ //Enquanto o expoente for menor ou igual a 15
	resp = pow(3, exp); //Atribuir para a variável resposta o valor de 3 elevado ao expoente
	printf("3 elevado a %i = %i\n", exp, resp); //Exibir os resultados
	exp++; //Incrementar na variável do expoente
}
return 0; //Finalizar o código
}
