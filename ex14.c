#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


int main()
{
	 setlocale(LC_ALL,"portuguese");
  int numeros[4];
  int soma;
  for (int contador = 0; contador < 4; contador++){
    printf("Digite um número da posição: [%d]",contador );
    scanf("%d",&numeros[contador]);
    soma = soma + numeros[contador];
  }
    printf("%d\n",soma );
   return 0;
}
