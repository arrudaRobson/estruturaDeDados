#include<stdio.h>
#include<conio.h>
main(){

char sexo;
int idade;
float altura;
int escolaridade;

printf("Digite: \n");

printf("Sexo: ");scanf(" %c",&sexo);
printf("Idade: ");scanf("%d",&idade);
printf("Altura: ");scanf("%f",&altura);
printf("Escolaridade: ");scanf("%d",&escolaridade);

if (sexo=='M' && idade>=18 && altura>=1.90 && escolaridade==2)
     printf("Vaga: Segurança");
else if (sexo=='F' && idade<18 && (altura>=1.60 && altura<=1.70)  && escolaridade==2)
	 printf("Jovem aprendiz");
else if ((sexo=='F' || sexo=='M') && idade>18 && (altura>=1.65 && altura<=1.90)  && escolaridade==3)
	 printf("Eng Eletricista");
else{
	printf("Nenhuma vaga encontrada para o seu perfil!");
}
getch();
}


