#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float A, B, convert;

int main()
{
	 setlocale(LC_ALL,"portuguese");
      printf("Quanto vale 1U$ em R$: \n");
      scanf("%f",&A);
      printf("Quantos U$ deseja converter: \n");
      scanf("%f",&B);
      

       	convert = A * B;

   

       printf("Valor convertido R$:%f\n",convert);


    
    printf("\n");

	return 0;
}
