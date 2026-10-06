#include <stdio.h>
int main() {
	int idade;
	printf("Digite a idade: ");
	scanf("%i", &idade);
	printf("Voce tem %.i anos", idade);
	if (idade >= 16) {
	printf("\nVoce esta apto a votar!");
	}
	else {
	printf("\nVoce nao esta apto a votar");
	}
	if (idade >= 18) {
		printf("\nVoce pode tirar a CNH!");
	}
	else {
		printf("\nVoce nao pode tirar a CNH");
	}
	return 0;
}
