//Implemente uma fun��o para normalizar um conjunto de valores armazenados em um array de tipo double,
//para que eles passem a ter m�dia zero. O cabe�alho da fun��o deve ser: void normaliza(double x_inout[ ]);
//A quantidade de elementos no array � armazenada na vari�vel global, N, declarada como sendo de tipo int.
//Esta fun��o deve utilizar, internamente, a fun��o definida no exerc�cio anterior (8) para calcular o 
//valor m�dio. Implemente uma aplica��o que demonstra a aplica��o da fun��o.
#include <stdio.h>
#include <stdlib.h>
int N = 3;

double calcular_media(double vetor[]){
	double soma = 0.0;
	for(int i = 0; i < N; i++){
		soma = soma + vetor[i];
	}
	return soma/N;
}

void normaliza(double vetor[]){
	double normalizacao;
	double media = calcular_media(vetor);
	for(int i = 0; i < N; i++){
	normalizacao = vetor[i] - media;
		
	}
	printf("A normalizacao eh: %2.f ", normalizacao);
}

int main(){
	double vetor[ ] = {3.2, 4.2, 3.4};
    normaliza(vetor);
	return 0;
}