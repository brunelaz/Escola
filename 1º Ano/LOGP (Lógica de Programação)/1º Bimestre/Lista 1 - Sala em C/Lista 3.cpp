#include<stdio.h>
int main()
{
	float R, A, V;
	printf("Entre com o valor do raio:");
	scanf("%f", &R);
	printf("Entre com o valor da altura:");
	scanf("f", &A);
	V= 3.14159 * A * R * R;
	printf("O valor do volume e: %.2f", V);
	return 0;
}
