#include <stdio.h>
#include <stdlib.h>


int soma(int num1, int num2)
{
    return num1+num2;
}

int main()
{
    int x, y;
    printf("Digite um número:\n");
    scanf("%d", &x);
    printf("Digite um número:\n");
    scanf("%d", &y);
    printf("Soma dos números digitados: %d\n",soma(x,y));
}
