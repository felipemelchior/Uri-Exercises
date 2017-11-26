#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	int tempo, vm, dist;
	float total;

	cin >> tempo;
	cin >> vm;

	dist = tempo * vm;

	total = (float)dist/12;

	cout << fixed << setprecision(3);
	cout << total << endl;
}