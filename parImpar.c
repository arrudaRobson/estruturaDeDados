#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int n1, resto;

int main()
{
	 setlocale(LC_ALL,"portuguese");
 
   printf("Entre com o número: ");
   scanf("%d", &n1);

   	   if (n1 % 2 == 0){
       printf("\nO numero %d é par. \n",n1);
    } else{
       printf("\nO numero %d é impar. \n",n1); 
    }
   
   
   
   return 0;
}
