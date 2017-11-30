/**
 *
 *	Nome: Felipe Homrich Melchior
 *
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <omp.h>
using namespace std;

void bubbleSort(int vet[], int n){
	int temp;
	int i=0,j=0;

	#pragma omp parallel for private(i)
	for(i = 0; i < n; i++){
		#pragma omp parallel for shared(vet) private(temp,j)
		for(j = i + 1; j < n; j++){
			if(vet[i] > vet[j]){
				temp = vet[i];
				vet[i] = vet[j];
				vet[j] = temp;
			}
		}
	}
	

	return; 
}

int main(int argc, char ** argv){
	int aux, ind1, ind2;
	int vetor[100000];
	double start, final, elapsed;

	ofstream oFileDesor;
	ofstream oFileOrder;
	oFileDesor.open("saidaDesordenada.txt");
	oFileOrder.open("saidaOrdenada.txt");


	srand (time(NULL));

	// Inicializa um vetor linearmente
	for(int i = 0; i < 100000; i++){
		vetor[i] = i;
	}

	// Sorteia dois indices e troca seu conteudo
	for(int i = 0; i < 100000; i++){
		ind1 = rand()%100000;
		ind2 = rand()%100000;

		aux = vetor[ind1];
		vetor[ind1] = vetor[ind2];
		vetor[ind2] = aux;
	}

	/*
	oFileDesor << "Vetor Desordenado" << endl;
	for(int i = 0; i < 100000; i++){
		oFileDesor << vetor[i] << endl; 
	}*/

	start = omp_get_wtime();
	bubbleSort(vetor, 100000);
	final = omp_get_wtime();
	elapsed = final - start;

	
	oFileOrder << "Vetor Ordenado" << endl << "Tempo: " << elapsed << endl;
	for(int i = 0; i < 100000; i++){
		oFileOrder << vetor[i] << endl; 
	}

}