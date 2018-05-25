#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int *p, soma=0, *vetorEnd[30], cont=0;
	printf("(Digite '0' para encerrar. Obs: Limite 30 numeros)\n\n");
	do{
		printf("Digite um numero: ");
		p = (int *) malloc(sizeof(int));
		scanf("%d",p);
		soma = soma + (*p);
		vetorEnd[cont] = p;
		cont++;
		if (cont==30) break;
	}while((*p)!=0);
	cont--;
	printf("A soma é %d\n\n",soma);
	for(;cont>=0;cont--){
		printf("vetorEnd[%d] = %p\n",cont,vetorEnd[cont]);
	}
	getch();
}
