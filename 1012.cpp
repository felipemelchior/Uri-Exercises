#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	double A, B, C;
	double pi = 3.14159;

	cin >> A;
	cin >> B;
	cin >> C;

	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << (A * C)/2 << endl
		 << "CIRCULO: " << pi*(C * C) << endl
		 << "TRAPEZIO: " << ((A + B)/2) * C << endl
		 << "QUADRADO: " << (B * B) << endl
		 << "RETANGULO: " << (A * B) << endl;

}