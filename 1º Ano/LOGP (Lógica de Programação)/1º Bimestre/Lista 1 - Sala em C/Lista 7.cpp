#include<stdio.h>

int main(){
	float custo, ncoe;
	printf("Entre com o numero de coelhos:\n");
	scanf("%f",&ncoe);
	custo=(ncoe*0.70)/18 + 10;
	printf("O valor do custo e:%.2f", custo);
	return 0;
}
