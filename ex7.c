#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Celsius, Result;


int main(){
   setlocale(LC_ALL,"portuguese");
   printf("Digite a temperatura em °C: \n");
   scanf("%d", &Celsius);
   Result = (Celsius+273);
   printf("Temperatura em kelvin: %d", Result);
   printf("\n");
   return 0;
}