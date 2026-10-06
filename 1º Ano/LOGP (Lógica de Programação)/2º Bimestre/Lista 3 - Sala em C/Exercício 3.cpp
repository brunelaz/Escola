//Exercício 3: Exibir a tabuada do número digitado
#include <stdio.h> //Incluir a biblioteca stdio.h
int main() { //Iniciar o código
int num; //Declarar a variável do número que vai ser digitado pelo usuário
int tabuada = 1; //Declarar a variável dos valores que serão multiplicados
int resp; //Declarar a variável dos resultados das multiplicações
printf("Digite um valor para a tabuada: "); //Solicitar ao usuário para que digite o valor da tabuada
scanf("%i", &num); // Escanear o valor digitado pelo usuário
while(tabuada <= 10){ //Enquanto o valor multiplicado for menor ou igual a 10
	resp = num * tabuada; //Atribuir para a variável resposta o valor da multiplicação dos dois números
	printf("%.i x %.i = %.i\n", num, tabuada, resp); // Exibir a tabuada
	tabuada = tabuada+1; // Incrementar 1 para o número que vai ser multiplicado
}
return 0;//Finalizar o código

}
