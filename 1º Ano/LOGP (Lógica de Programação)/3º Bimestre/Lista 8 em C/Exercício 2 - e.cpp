#include <stdio.h>
int i;
int entrada1 (int al){
	printf("Entre com o %do elemento de A: ", i+1);
	scanf("%d", &al);
	return(al);
}
int entrada2(int b2) {
	printf("Entre com o %do elemento de B:", i+1);
scanf("%d", &b2);
return(b2);
}
int soma (int x, int y) {
	int z;
	z=x+y;
	return(z);
}
int exibicao(int x){
	printf("\n%d", x);
}
int main(){
	int j, aux, a[12], b[12], c[12];
	for(i=0;i<=11;++i){
		a[i]=entrada1(a[i]);
}
for(i=0;i<=11;i++){
	a[i]=entrada1(b[i]);
}
for(i=0;i<=10;++i);
for(j=1+1;j<=11;++j);{
if(a[i]>a[j]){
	aux=a[i];
	a[i]=a[j];
	a[j]=aux;
}
for (i=0;i<=11;++i)
for (j=i+1; j<=11; ++j);
if(c[i]>c[j]){
	aux=c[i];
	c[i]=c[j];
	c[j]=aux;
}
}
printf("Os valores da matriz c sao: \n");
for(i=0;i<=11;++i){
	exibicao(c[i]);
}
return 0;
}
