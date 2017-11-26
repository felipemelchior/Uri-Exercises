#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){
	float x1, x2, y1, y2;
	float dist, aux;

	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;

	aux = pow(x2-x1, 2) + pow(y2-y1, 2);

	dist = sqrt(aux);

	cout << fixed << setprecision(4);
	cout << dist << endl;

}