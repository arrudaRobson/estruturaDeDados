#include<stdio.h>
#include<conio.h>

void buscar(int vet[], int npesquisa);

main(){

	int vet[10], npesquisa, i=0;

	while(i<10){
		printf("Digite vet[%d] = ",i);
		scanf("%d",&vet[i]);
		i++;
	}
	printf("Digite um valor para pesquisar: ");
	scanf("%d",&npesquisa);
	buscar(vet, npesquisa);
	getch();

}

void buscar(int vet[], int npesquisa){
	int i=0;
	for(i=0;i<10;i++){
		if (vet[i]==npesquisa){
			break;
		}
	}
	if(i!=10){
		printf("Encontrado na posicao %d\n",i);
	}else{
		printf("Não encontrado!\n");
	}
}

