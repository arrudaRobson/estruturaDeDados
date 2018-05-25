#include<stdio.h>
#include<conio.h>
main(){
	int i, num, contDivisores=0;
	printf("digite um numero: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i==0){
		   contDivisores++;
		}
	}
	if(contDivisores==2){
		printf("O numero e primo!");
	}else{
		printf("O numero nao e primo!");
	}
	getch();
	
}
