#include <stdio.h>

void incrementa(int *a)
{
    *a = *a + 1;
}

int main()
{
    int a = 5;
    incrementa(&a);

    printf("%d\n",a);
}
