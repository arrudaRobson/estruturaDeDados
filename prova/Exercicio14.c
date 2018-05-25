#include<stdio.h>
#include<conio.h>
struct aluno{
	int ra;
	char nome[20];
}
main(){
	struct aluno al[3];
	int i;
	for(i=0;i<=2;i++){
		printf("\nVetor[%d]\n",i);
		printf("Digite o RA: ");
		scanf("%d",&al[i].ra);
		printf("Digite o NOME: ");
		fflush(stdin);
		gets(al[i].nome);
	}
	printf("\nDados cadastrados:\n\n");
	for(i=0;i<=2;i++){
		printf("Vetor[%d] => ",i);
		printf("RA= %d - ",al[i].ra);
		printf("NOME= %s\n",al[i].nome);
	}
	getch();
}

