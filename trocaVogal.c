#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

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
  for (contador = 0; contador < 20; contador++){
      if (nome[contador] != '\0'){
        if (nome[contador] == 'a' || nome[contador] == 'e' || nome[contador] == 'i' || nome[contador] == 'o' || nome[contador] == 'u')
        {
         nome[contador] = '*';
        }
      }else{
        break;
      }
    }
    printf("%s tem %d caractéres.\n",nome ,contador);
    register int t;
//print reverse name
    for (t = strlen(nome)-1; t > -1; t--)
        printf("%c", nome[t]);
  return 0;
}
