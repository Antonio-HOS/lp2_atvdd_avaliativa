#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int desenhaPiramide(int tam, int tipo)
{
    if (tam < 1 || tam > 20)
    {
        return 1;
    }
    printf("\n\n");
    if (tipo == 0)
    {

        for (int i = tam; i > 0; i--)
        {
            for (int j = 0; j < tam - i; j++)
            {
                printf(" ");
            }
            for (int w = (i * 2); w > 0; w--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    if (tipo == 1)
    {

        printf("\n\n");

        for (int i = tam; i > 0; i--)
        {

            for (int w = i; w > 0; w--)
            {
                printf(" ");
            }
            for (int j = 0; j < (tam - i+1) * 2; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
};

int main(int argc, char *argv[])
{

    int tam = atoi(argv[1]);
    int tipo = atoi(argv[2]);

    // printf("%d, %d", tam, tipo);

    desenhaPiramide(tam, tipo);

    return 0;
}
