
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int QtdDay;
float ValuePrest, TxDay, Result;


main(){
	setlocale(LC_ALL,"portuguese");
   printf("Digite o valor da prestação: \n");
   scanf("%f", &ValuePrest);
   printf("Digite a taxa de juros (ex: 3% = 0,03): \n");
   scanf("%f", &TxDay);
   printf("Digite a quantidade de dias: \n");
   scanf("%d", &QtdDay);
   Result = (ValuePrest*TxDay*QtdDay)+ValuePrest;
   printf("Valor atualizado: %f", Result);
   system("pause");
}
