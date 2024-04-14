#include <stdio.h>
#include <string.h>

int desenhaLinhaR(int tamanho, char linha[]) { 
    linha[strlen(linha)] = '\0';
    if (tamanho < 1 || tamanho > 20) {
        return 1;
    } else {
        linha[tamanho-1] = '*';
        desenhaLinhaR(tamanho-1, linha);   
    }
}

int main() {
    int tam = 0;

    printf("Digite o tamanho da linha: \n");
    scanf("%i", &tam);

    char arr[tam];

    desenhaLinhaR(tam, arr);
    arr[tam] = '\0';
    printf("%s", arr);
    
    //printf("\n %i \n", arr[tam]);

    return 0;
}