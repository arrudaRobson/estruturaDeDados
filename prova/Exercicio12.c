#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct potencia{
	float base;
	float expoente;
};
main(){
	struct potencia *pot;
	pot = (struct potencia *) malloc(sizeof(struct potencia));
	printf("Digite a base: ");
	scanf("%f",&(*pot).base);
	printf("Digite o expoente: ");
	scanf("%f",&(*pot).expoente);
	printf("O resultado da potencia e %.2f",pow((*pot).base,(*pot).expoente));
	getch();
}


