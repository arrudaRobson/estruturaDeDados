#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int A, B, Result;
float area;

int main()
{
	 setlocale(LC_ALL,"portuguese");
      printf("Digite o valor da base: \n");
      scanf("%d",&A);
      printf("Digite o valor da altura: \n");
      scanf("%d",&B);
      

       printf("Sua equacao: %dbase * %daltura \n", A, B);

       	area = A * B / 2;

   

       printf("Área do triangulo: %f\n",area);


    
    printf("\n");

	return 0;
}
