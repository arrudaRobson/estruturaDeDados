#include<stdio.h>
#include<conio.h>
void fatorial(int *p);
main(){
	int n;
	printf("Digite um numero para o fatorial: ");
	scanf("%d",&n);
	fatorial(&n);
	printf("O fatorial é %d",n);
	getch();
}
void fatorial(int *p){
    int fat=1;
    int i = *p;
    while(i>=1){
    	fat = fat * i;
    	i--;
	}
	*p = fat;
}
