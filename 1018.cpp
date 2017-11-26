#include <iostream>
using namespace std;

int main(void){
	int valor, aux;
	int vetor[7]= {0,0,0,0,0,0,0};

	cin >> valor;
	aux = valor;

	while(aux > 0){
		if(aux >= 100){
			vetor[0]++;
			aux -= 100;	
		} 
		else if(aux >= 50 && aux <= 99){
			vetor[1]++;
			aux -= 50;
		}
		else if(aux >= 20 && aux <= 49){
			vetor[2]++;
			aux -= 20;
		} 
		else if(aux >= 10 && aux <= 19){
			vetor[3]++;
			aux -= 10;
		} 
		else if(aux >= 5 && aux <= 9){
			vetor[4]++;
			aux -= 5;
		}
		else if(aux >= 2 && aux <= 4){
			vetor[5]++;
			aux -= 2;
		}
		else if(aux >= 1){
			vetor[6]++;
			aux -= 1;
		} 
	}

	cout << valor << endl
		 << vetor[0] << " nota(s) de R$ 100,00" << endl
		 << vetor[1] << " nota(s) de R$ 50,00" << endl
		 << vetor[2] << " nota(s) de R$ 20,00" << endl
		 << vetor[3] << " nota(s) de R$ 10,00" << endl
		 << vetor[4] << " nota(s) de R$ 5,00" << endl
		 << vetor[5] << " nota(s) de R$ 2,00" << endl
		 << vetor[6] << " nota(s) de R$ 1,00" << endl;
}