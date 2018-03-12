#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int A, B, C, Result;
float x1, x2, delta;

int main()
{
	 setlocale(LC_ALL,"portuguese");
      printf("Digite o valor de a: \n");
      scanf("%d",&A);
      printf("Digite o valor de b: \n");
      scanf("%d",&B);
      printf("Digite o valor de c: \n");
      scanf("%d",&C);

       printf("Sua equacao: %ix^2 + %dx + %d = 0\n", A, B, C);



         delta=B*B-4*A*C;

         printf("Delta igual: %f\n",delta);


             if (delta<0)
             {
             printf("Nao é possivel extrair a raiz deste numero\n");

         }
             else



     {
     x1 = ((-B) + sqrt(delta))/(2*(A));
     x2 = ((-B) - sqrt(delta))/(2*(A));

    }

    printf("O resultado da equacao x1: %f\n e x2: %f\n",x1,x2);
    printf("\n");
    
	return 0;
}
