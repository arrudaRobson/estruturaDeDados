#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
     setlocale(LC_ALL,"portuguese");
     int *n;
     n = (*int)malloc(sizeof(int));
     printf("Digite um número: ");
     scanf("%d",n);
     printf("O número foi %d\n", *n);
     return 0;
}
