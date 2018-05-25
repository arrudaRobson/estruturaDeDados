#include<stdio.h>
#include<conio.h>

void buscar(char mat[4][20], char npesquisa[20]);

main(){

	char mat[4][20], npesquisa[20];
	int linha=0;

 	for(linha=0; linha<=3; linha++){
 		printf("Digite o nome[%d] =",linha);
 		gets(mat[linha]);
	}
	printf("Digite um nome para pesquisar: ");
	gets(npesquisa);
	buscar(mat, npesquisa);
	getch();

}

void buscar(char mat[4][20], char npesquisa[20]){
	int linha=0;
 	for(linha=0; linha<=3; linha++){
 		if(strcmp(mat[linha],npesquisa)==0){
 			break;
		}
	}
	if(linha!=4){
		printf("Encontrado na linha %d\n",linha);
	}else{
		printf("Nao encontrado!\n");
	}
}

