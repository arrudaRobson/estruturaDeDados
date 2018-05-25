#include<stdio.h>
#include<string.h>
#include<conio.h>

void inverter(char nome[]);

main(){
	char nome[20];
	printf("Digite um nome: ");
	fflush(stdin);
	gets(nome);
	inverter(nome);
	getch();
}

void inverter(char nome[]){
	int i;
	for(i=strlen(nome)-1;i>=0;i--){
		printf("%c",nome[i]);
	}
}
