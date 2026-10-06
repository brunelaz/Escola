#include<stdio.h>
int main()
{
	float P, V, TA, TE;
	printf("Entre com o valor:\a");
	scanf("%f", &V);
	printf("Entre com a taxa:\a");
	scanf("%f", &TA);
	printf("Entre com o tempo:\n");
	scanf("%f", &TE);
	P=V+(V*(TA/100)*TE);
	printf("O valor da Prestacao e:%.2f", P);
	return 0;
}
