#include<stdio.h>
#include<conio.h>
main(){
	int inicio, fim, i;
	printf("Digite o inicio: ");
	scanf("%d",&inicio);
	printf("Digite o fim: ");
	scanf("%d",&fim);
	for(i=inicio;i<=fim;i++){
	   if (i%2==1){
		   printf("%d ",i);
	   }
	}
	getch();
}
