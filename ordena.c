#include <stdio.h>
#include <stdlib.h>

int vet[5];

void ordena()
{
    int a, b, maiorNum;

        for( a=0; a<5; a++ ){
            for( b=a+1; b<5; b++ ){
                if( vet[a] > vet[b] ){
                    maiorNum = vet[a];
                    vet[a] = vet[b];
                    vet[b] = maiorNum;
                }
            }
        }

    printf("\n Ordenação\n\n");
}

int main()
{

    int x;

        for (x=0; x<5; x++){
            printf("Digite um número: ");
            scanf("%d", &vet[x]);
        }

        ordena();

        for (x=0; x<5; x++){
            printf("Números ordenados: %d \n", vet[x]);
        }

        printf("\n");
}
