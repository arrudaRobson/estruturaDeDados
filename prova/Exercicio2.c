#include<stdio.h>
#include<string.h>
#include<conio.h>

int contarVogais(char nome[]);

main(){
	char nome[20];
	printf("Digite um nome: ");
	fflush(stdin);
	gets(nome);
	printf("O nome tem %d vogais!",contarVogais(nome));
	getch();
}
int contarVogais(char nome[]){
	int i=0, contVog=0;
	while(i<strlen(nome)){
		switch(nome[i]){
		   case 'a':
		   case 'e':
		   case 'i':
		   case 'o':
		   case 'u':
			  contVog++;
		}
        i++;
	}
	return contVog;
}
