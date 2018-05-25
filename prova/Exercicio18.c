#include<stdio.h>
#include<conio.h>
main(){
	char l;
	printf("Digite uma letra: ");
	l = getchar();
	switch(l){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("E vogal!");
			break;
		default:
			printf("E consoante!");
	}
	
	getch();
}
