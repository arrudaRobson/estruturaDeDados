#include<stdio.h>
#include<conio.h>
main(){
	char l;
	printf("Digite uma letra: ");
	//scanf(" %c",&l);
	//ou
	//l = getch();
	//ou
	//l = getche();
	l = getchar();
	if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'){
		printf("E vogal!");
	}else{
		printf("Nao e vogal!");
	}
	getch();
}
