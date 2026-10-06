#include<stdio.h>
int somatoria(int num){
	int soma, i;
	for(i=1;i<=num;++i){
	
	soma += i;
	}
	return soma;
	}
	int main(){
		int num, resp;
			printf("Digite o numero escolhido: ");
	scanf("%d", &num);
	resp = somatoria(num);
printf("O resultado e: %d", resp);
return 0;
}
