#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


int main()
{
	 setlocale(LC_ALL,"portuguese");
  int numeros[4], contador, search;

  for (int contador = 0; contador < 4; contador++){
    printf("Digite um número da posição: [%d]",contador );
    scanf("%d",&numeros[contador]);

  }
  printf("Digite um número para'pesquisar\n");
  scanf("%d",&search);
  for (int contador = 0; contador  <= 3; contador++){
    if (numeros[contador] == search){
      printf("Encontrei o numero na posição %d\n",contador );
      break;
    }

  }
  printf("Número não encontrado!!!\n" );
   return 0;
}
