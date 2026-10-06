#include<stdio.h>
void fibonacci(int n) {
	int n1=0, n2=1, fibo;
	if(n>=1){
		printf("%d", n2);
	}
	for(int i = 1;i<n;i++){
		fibo=n1+n2;
		printf("%d", fibo);
		n1=n2;
		n2=fibo;
}
printf("\n");
}
int main(){
	int num;
	printf("Entre com a quantidade de termos: ");
	
	scanf("%d", &num);
	if (num<=0){
		printf("Por favor, entre com um numero maior que zero.\n");
	} else{
		fibonacci(num);
	}
	return 0;
}
