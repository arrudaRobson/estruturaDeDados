#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
     setlocale(LC_ALL,"portuguese");
  int *a, b = 5;//Declarando variaveis onde a é um ponteiro
  a = &b;
  *a = 8;//*a se torna a variável b
  printf("Conteudo de B = %d\n",b );//Imprime valor de b = 8
  printf("Endereco de B = %p\n",&b );//imprime endereço de b
  printf("Conteudo de A = %p\n",a );//imprime endereço de *a
  printf("Endereco de A = %p\n",&a );//imprime endereço de *a
  printf("Conteudo de B = %d\n",*a );//Imprime valor de b = 8
}
