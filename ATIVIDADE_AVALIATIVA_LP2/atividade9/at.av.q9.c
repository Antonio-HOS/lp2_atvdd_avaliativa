//Implemente uma fun��o para calcular o desvio padr�o de um conjunto de valores armazenados em um array 
//de valores de tipo double. O cabe�alho da fun��o deve ser: double desvioPadraoG(double x[ ]);
//A quantidade de elementos no array � armazenada na vari�vel global, N, declarada como sendo de tipo int.
//Esta fun��o deve utilizar, internamente, a fun��o definida no exerc�cio anterior para calcular o valor 
//m�dio. Implemente uma aplica��o que demonstra a aplica��o da fun��o.
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

