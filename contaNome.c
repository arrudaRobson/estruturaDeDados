#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	 setlocale(LC_ALL,"portuguese");
 
 int contador;
  char nome[30] = "Robson";
  char sobrenome[100] = "Arruda";
  puts("Digite seu nome: ");
  gets(nome);
  puts("Digite seu sobrenome: ");
  gets(sobrenome);
  	for (contador = 0; contador < 30; contador++){
  		if (nome[contador] != '\0'){
  			
  		}else{
  			break;
  		}
  	}
  	printf("%d\n", contador);
  printf("Olá %s %s\n", nome, sobrenome);

   return 0;
}
