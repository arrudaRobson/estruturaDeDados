#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main()
{
  setlocale(LC_ALL,"portuguese");
  int contador, compara;
  char primeiroNome[20], segundoNome[20];
  printf("Digite um nome \n");
  gets(primeiroNome);
  printf("Digite um nome \n");
  gets(segundoNome);
  printf("Os nomes digitados foram\n%s\n%s\n",primeiroNome, segundoNome);

  compara = strncmp(primeiroNome, segundoNome, 20);

  if(compara > 0)
  {
    printf("São diferentes\n");
  }
  else if(compara < 0)
  {
    printf("São diferentes\n");
  }
  else
  {
    printf("São iguais\n");
  }

  return 0;
}
