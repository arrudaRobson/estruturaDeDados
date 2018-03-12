#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


int main()
{
	 setlocale(LC_ALL,"portuguese");
  int numeros[4], contador;
  
  for (int contador = 0; contador < 4; contador++){
    printf("Digite um número da posição: [%d]",contador );
    scanf("%d",&numeros[contador]);

  }
  for (int contador = 3; contador >= 0; contador--){
    printf("%d,",numeros[contador]);
    
  }
   return 0;
}
