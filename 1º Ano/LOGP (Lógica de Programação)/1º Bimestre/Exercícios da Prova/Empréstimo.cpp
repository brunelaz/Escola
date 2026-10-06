#include <stdio.h>
int main() {
int idade;
float salario;
printf("Digite a idade: ");
scanf("%i", &idade);
printf("\nDigite o salario: ");
scanf("%f", &salario);
if (idade < 25 || idade > 55) {
	printf("\nSua idade nao se encaixa nos requisitos para emprestimo!");
}
else if (salario >= 5000) {
	printf("\nApto para emprestimo!");
}
else {
	printf("\nNao esta apto para emprestimo.");
}
return 0;
} 
