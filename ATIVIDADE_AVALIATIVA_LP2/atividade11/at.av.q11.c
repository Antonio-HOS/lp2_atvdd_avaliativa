//Em sala de aula analisamos uma vers�o recursiva para calcular a soma dos elementos de uma array.
//Fa�a uma vers�o recursiva da fun��o que implementa o c�lculo da m�dia dos elementos de um array.
//Implemente uma aplica��o que demonstra a aplica��o da fun��o.
//#include<stdio.h>
#include<stdlib.h>
int N = 4;

double soma_recursiva(double vetor[], int tamanho){
	if(tamanho == 0){
		return 0;
	}else{
		return vetor[tamanho-1]+soma_recursiva(vetor, tamanho-1);
	}
}

double calculo_media(double vetor[], int tamanho){
	if(tamanho == 0){
		return 0;
	}else{
		double soma = soma_recursiva(vetor, tamanho);
		return soma/tamanho;
	}
}

int main(void){
	double vetor[ ] = {2.2, 3.3, 4.2, 2.3};
	double media = calculo_media(vetor, N);
	printf("A media eh: %2.f", media);
}
