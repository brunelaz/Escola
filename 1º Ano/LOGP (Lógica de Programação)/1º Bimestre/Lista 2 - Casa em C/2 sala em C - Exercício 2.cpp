//Exercício 2: Calculo de média com nota de exame
#include<stdio.h>

int main() {
	float nota1, nota2, notaexame, media, novamedia; //Identificar as variáveis
	
	printf("Digite a primeira nota: "); //Solicitar para o usuário entrar com a primeira nota
	scanf("%f", &nota1); //Ler a primeira nota
	
	printf("Digite a segunda nota: "); //Solicitar para o usuário entrar com a segunda nota
	scanf("%f", &nota2); //Ler a segunda nota
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 6.0) { //Se a media for maior ou igual a 6
		printf("\nO aluno foi APROVADO!"); //Exibir que o aluno foi aprovado
		printf("\nA media e: %.2f\n", media); //Exibir a media do aluno
	}
	else { //Se a media nao for maior ou igual a 6
		printf("Digite a nota do exame: "); //Solicitar a nota do exame
		scanf("%f", &notaexame); //Ler a nota do exame
	
	novamedia = (media + notaexame) / 2; //Calcular a nova media somando a media original com a nota do exames
	
	if(novamedia >= 5.0) { //Se a nova media for maior ou igual a 5
	printf("\nO aluno foi APROVADO em exame!"); //Exibir que o aluno foi aprovado no exame
	printf("\nA nova media do aluno apos o exame e: %.2f\n", novamedia); //Exibir a nova média do aluno após o exame
}
	else { //Se a nova media nao for maior ou igual a 5
		printf("\nO aluno nao foi aprovado.");
	printf("\nA nova media do aluno apos o exame e: %.2f\n", novamedia); //Exibir a nova média do aluno após o exame
		
	}
		
	}
	return 0; //Finalizar o código
	}
