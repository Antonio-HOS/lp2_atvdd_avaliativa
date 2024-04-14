//Implemente uma função para calcular o desvio padrão de um conjunto de valores armazenados em um array 
//de valores de tipo double. O cabeçalho da função deve ser: double desvioPadraoG(double x[ ]);
//A quantidade de elementos no array é armazenada na variável global, N, declarada como sendo de tipo int.
//Esta função deve utilizar, internamente, a função definida no exercício anterior para calcular o valor 
//médio. Implemente uma aplicação que demonstra a aplicação da função.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N = 3;

double calcular_media(double x[ ]){
	double soma = 0.0;
	for(int i = 0; i<N; i++){
		soma = soma + x[i];
		
		return soma/N;
	}
}

double desvioPadraoG(double x[ ]){
	double quadrado_das_diferencas = 0.0;
	double media = calcular_media(x);
	 
	for(int i = 0; i<N; i++){
		quadrado_das_diferencas = quadrado_das_diferencas + pow(x[i]-media, 2);
	}
	return sqrt(quadrado_das_diferencas);
}

int main(void){
	double vetor[ ]={4.4, 4.6, 2.8};
	
	int desvio_padrao = desvioPadraoG(vetor);
	
	printf("O desvio padrao do vetor eh: %.2f", desvio_padrao);
	
	return 0;
}

