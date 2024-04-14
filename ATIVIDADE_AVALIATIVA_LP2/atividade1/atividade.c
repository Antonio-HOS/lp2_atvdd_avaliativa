#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int tam = atoi(argv[1]);
    int vaz = atoi(argv[2]);


    if (tam < 1 || tam > 20)
    {
        return 1;
    }

    if (vaz == 0)
    {

        for (int i = 0; i < tam; i++)
        {
            for (int j = 0; j < tam; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    if (vaz == 1)
    {

        printf("\n\n\n");

        for (int i = 0; i < tam; i++)
        {
            printf("*");
        }
        printf("\n");

        for (int i = 0; i < tam - 2; i++)
        {
            printf("*");
            for (int j = 0; j < tam-2; j++)
            {
                printf(" ");
            }

            printf("*");
            printf("\n");
        }
        for (int i = 0; i < tam; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
