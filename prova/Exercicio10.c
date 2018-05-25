#include<stdio.h>
#include<conio.h>

void buscar(int mat[3][2], int npesquisa);

main(){

	int mat[3][2], npesquisa, linha=0, coluna=0;

 	for(linha=0; linha<=2; linha++){
	    for(coluna=0; coluna<=1; coluna++){
			printf("Digite mat[%d][%d] = ",linha,coluna);
			scanf("%d",&mat[linha][coluna]);
		}
	}
	printf("Digite um valor para pesquisar: ");
	scanf("%d",&npesquisa);
	buscar(mat, npesquisa);
	getch();

}

void buscar(int mat[3][2], int npesquisa){
	int linha=0, coluna=0;
 	for(linha=0; linha<=2; linha++){
	    for(coluna=0; coluna<=1; coluna++){
	    	if (mat[linha][coluna]==npesquisa){
	    		break;
			}
		}
		if(coluna!=2) break;
	}
	if(linha!=3 && coluna!=2){
		printf("Encontrado na linha %d e coluna %d\n",linha,coluna);
	}else{
		printf("Nao encontrado!\n");
	}
}

