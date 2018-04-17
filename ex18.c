#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


void main(){
	setlocale(LC_ALL,"portuguese");

  int matriz[3][2], linha, coluna, max;

  printf("Digite os números da matriz\n" );
  for (linha = 0; linha <= 2; linha++){
    for (coluna = 0; coluna <= 1; coluna++){
        scanf("%d", &matriz[linha][coluna]);
    }
  }
  for (linha = 0; linha <= 2; linha++){
    for (coluna = 0; coluna <= 1; coluna++){

    }
  }
  printf("%d\n", matriz[linha][coluna]);
  printf("%d\n", max);
}
