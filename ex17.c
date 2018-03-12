#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"portuguese");
  
  int matriz[3][2], linha, coluna;

  printf("Digite os números da matriz\n" );
  for (int linha = 0; linha <= 2; linha++){
    for (int coluna = 0; coluna <= 1; coluna++){
        scanf("%d", &matriz[linha][coluna]);
    }
  }  
  for (int linha = 0; linha <= 2; ++linha){
    for (int coluna = 0; coluna <= 1; coluna++){
        printf("%d", matriz[linha][coluna]);    
    }
  }  
  return 0;
}
