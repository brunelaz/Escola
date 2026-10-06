#include<stdio.h>
int a[5], b[5], c[10], i;
int leita() {
	printf("\nEntre com os valores da matriz A:\n");
	for(i=0;i<=4;i++)
		scanf("%i", &a[i]);
}
	int leitb(){
		printf("Entre com os valores da matriz B:\n");
		for (i=0;i<=4;i++){
			scanf("%i", &b[i]);
		}
	}
	int calcc(int a[],int b[]) {
		for (i=0;i<=4;i=i+1){
		c[i]=a[i];
	}
		for(i=0;i<=4;i=i+1){
		c[i+5]=b[i];
	}
	}
	int exibc(int c[]){
		printf("Valores das duas matrizes: ");
		for(i=0;i<9;i=i+1){
		printf("\n%i", c[i]);
	}
}
	int main(){
		leita();
		leitb();
		calcc(a,b);
		exibc(c);
	}
