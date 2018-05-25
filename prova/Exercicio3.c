#include<stdio.h>
#include<string.h>
#include<conio.h>

int contarLetras(char nome[]);

main(){
	char nome[20];
	printf("Digite um nome: ");
	fflush(stdin);
	gets(nome);
	printf("O nome tem %d letras!",contarLetras(nome));
	getch();
}
int contarLetras(char nome[]){
	int i=0, contLetras=0;
	do{
		if (nome[i]!=' '){
		   contLetras++;
		}
		i++;
	}while(i<strlen(nome));
	return contLetras;
}
