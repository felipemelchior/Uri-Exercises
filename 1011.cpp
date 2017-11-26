#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	double pi = 3.14159;
	double raio, volume;

	cin >> raio;

	volume = (4.0/3) * pi * (raio * raio * raio);

	cout << fixed << setprecision(3);
	cout << "VOLUME = " << volume << endl;

}