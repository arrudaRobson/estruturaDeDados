#include<stdio.h>
#include<stdlib.h>
void troca(int *a, int *b);
main(){
	int a, b;
	printf("Digite o valor de A: ");
	scanf("%d",&a);
	printf("Digite o valor de B: ");
	scanf("%d",&b);
	troca(&a,&b);
	printf("Valor de A= %d\n",a);
	printf("Valor de B= %d\n",b);
	getch();
}
void troca(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}
