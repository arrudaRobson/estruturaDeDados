#include<stdio.h>
#include<conio.h>

void SegundoParaHora();
void HorasParaSegundo();

main(){
	int opc;
	float segundos, horas;
	do{
		printf("O QUE DESEJA FAZER:\n\n");
		printf("1 - Horas em segundos\n");
		printf("2 - Segundos em horas\n");
		printf("3 - Sair\n\n");
		printf("Opcao: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				HorasParaSegundo();
				break;
			case 2:
				SegundoParaHora();
				break;
			case 3:
				printf("Saindo...");
				break;
			default:
			    printf("Opcao invalida!");
		}
		getch();
	}while(opc!=3);
}

void SegundoParaHora(){
	float segundos;
	printf("Digite os segundos: ");
	scanf("%f",&segundos);
	printf("Sao equivalentes a %.2f horas\n\n",segundos/3600);
}

void HorasParaSegundo(){
	float horas;
	printf("Digite as horas: ");
	scanf("%f",&horas);
	printf("São equivalentes a %.2f segundos\n\n",horas*3600);
}
