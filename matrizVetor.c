#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"portuguese");

    int matriz[3][2] = {{0}};
    int vetor[4] = {0};


    for (int i = 0; i < 4; i++ )
    {
      for ( int j = 0; j < 2; j++ )
      {
        printf("[%d][%d] Valor: ", i, j );
        scanf(" %d", &matriz[i][j] );
      }
    }

    for (int i = 0; i < 4; i++ )
    {
      for (int j = 0; j < 3; j++ )
      {
        vetor[i] += matriz[i][j];
      }
    }

    for (int i = 0; i < 4; i++ )
      printf("[%d] Valor: %d\n", i, vetor[i] );

  return 0;
}
