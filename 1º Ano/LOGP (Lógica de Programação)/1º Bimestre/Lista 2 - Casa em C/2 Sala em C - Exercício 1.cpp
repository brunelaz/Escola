//Exercício 1: Exibir se o aluno foi aprovado ou reprovado
#include<stdio.h> //iniciar o comando
int main() {
	float nota1, nota2, nota3, media;  //identificar as variáveis
	
	printf("Digite a primeira nota: ");  //Pedir para o usuário entrar com a primeira nota
	scanf("%f", &nota1); //Ler a primeira nota
	
	printf("Digite a segunda nota: "); //Pedir para o usuário entrar com a segunda nota
	scanf("%f", &nota2); //Ler a segunda nota
	
	printf("Digite a terceira nota: "); //Pedir para o usuário entrar com a terceira nota
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;  //Calcular a média somando as 3 notas e dividindo por 3
	
	if(media >= 6.0) { //Se a média for maior ou igual a 6
		printf("\nO aluno foi APROVADO!"); //Exibir que o aluno foi aprovado
}	
	else { //Se a media não for igual ou maior que 6
		printf("n\O aluno foi reprovado."); //Exibir que o aluno foi reprovado
	}
	printf("\nA media final e: %.2f\n", media); //Exibir a média do aluno
	
	return 0; //Finalizar o comando
	}
