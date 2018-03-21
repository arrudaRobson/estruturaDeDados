#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int A, B, Result;
float area;

int main()
{
  setlocale(LC_ALL,"portuguese");
  int contador;
  char nome[20];
  printf("Digite um nome \n");
  fflush(stdin);
  gets(nome);
  printf("O nome digitado foi %s\n",nome );
  printf("A primeira letra é :%c\n",nome[0] );
  for (contador = 0; contador < 30; contador++){
      if (nome[contador] != '\0'){

      }else{
        break;
      }
    }
    printf("%s tem %d caractéres.",nome ,contador);
  return 0;
}
