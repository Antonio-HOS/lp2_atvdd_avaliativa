/*
Faça uma implementação recursiva de uma função que, com base num array de tipo double, modifique seus elementos para que cada um deles vire o inverso do valor original ( o inverso de x é 1/x)
*/

#include <stdio.h>
#include <stdlib.h>

void preencherLR(double lista[], int n);
void inversor(double lista[], int n);

int main()
{
    int tam = 0;

    printf("\nEscolha o tamanho do Array: ");
    scanf("%i", &tam);

    double Arr[tam];

    printf("\nArray Normal:");
    preencherLR(Arr, tam);

    printf("\nArray Invertido:");
    inversor(Arr, tam);
}

void preencherLR(double lista[], int n)
{
    if (n == 0)
        return;
    lista[0] = (double)rand() / RAND_MAX * 100.0;
    printf("  %f", lista[0]);
    preencherLR(&lista[1], n - 1);
};

void inversor(double lista[], int n)
{
    if (n == 0)
        return;
    lista[0] = 1.0 / lista[0];
    printf("  %f", lista[0]);
    inversor(&lista[1], n - 1);
};