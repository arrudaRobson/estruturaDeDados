#include<stdio.h>
#include<conio.h>
void porValor(int a);
void porReferencia(int *b);
main(){
	int a=5, b=5;
	porValor(a);
	porReferencia(&b);
	printf("A = %d\n",a);
	printf("B = %d",b);
	getch();
}
void porValor(int a){
	a++;
}
void porReferencia(int *b){
	(*b)++;
}
