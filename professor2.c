#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");

	int a, *b;

	a = 3;
	b = &a;//b ponteiro de a coloca & para que encontre seu local de armazenamento
	*b = 5;//transforma b em a usando * antes da variável
	//*b = *b + 2 result a = 7;
	printf("%d\n",a );

   return 0;
}
