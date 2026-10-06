#include<stdio.h>

int main(){
	float t, v, d, lu;//
	printf("Entre com o tempo:\n");
	scanf("%f", &t);
	printf("Entre com a velocidade:\n");
	scanf("%f", &v);
	d=t*v;
	lu=d/12;
	printf("Os valores de tempo,velocidade,distancia,litros usados sao:%.2f %.2f %.2f %.2f", t, v, d, lu);
	return 0;
}
