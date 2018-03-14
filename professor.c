#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	 setlocale(LC_ALL,"portuguese");
 
 int contador;
  char nome[30] = "";
  puts("Digite seu nome: ");
  scanf("%[^\n]",nome);
 
  	for (contador = 0; contador < 30; contador++){
  		if (nome[contador] != '\0'){
  			
  		}else{
  			break;
  		}
  	}
  	printf("%d\n", contador);
  printf("Olá  %s\n", nome);

   return 0;
}
