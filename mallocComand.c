#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
     setlocale(LC_ALL,"portuguese");
     int *n1, *n2, *r;
     printf("Digite um número: ");
     n1 = (int *)malloc(sizeof(int));
     scanf("%d",n1);
     printf("Digite um número: ");
     n2 = (int *)malloc(sizeof(int));
     scanf("%d",n2);
     r = (int *)malloc(sizeof(int));
     *r = *n1 + *n2;
     printf("Soma dos números = %d\n", *r);
     return 0;
}
