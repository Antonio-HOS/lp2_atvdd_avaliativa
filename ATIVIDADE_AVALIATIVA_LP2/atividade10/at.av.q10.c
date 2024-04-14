//Implemente uma função para normalizar um conjunto de valores armazenados em um array de tipo double,
//para que eles passem a ter média zero. O cabeçalho da função deve ser: void normaliza(double x_inout[ ]);
//A quantidade de elementos no array é armazenada na variável global, N, declarada como sendo de tipo int.
//Esta função deve utilizar, internamente, a função definida no exercício anterior (8) para calcular o 
//valor médio. Implemente uma aplicação que demonstra a aplicação da função.
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

