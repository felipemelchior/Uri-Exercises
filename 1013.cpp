#include <iostream>
using namespace std;

int main(void){
	int a, b, c;
	int maiorAB;

	cin >> a;
	cin >> b;
	cin >> c;

	maiorAB = (a + b + abs(a-b)) / 2;

	if(maiorAB > c) cout << maiorAB << " eh o maior" << endl;
	else cout << c << " eh o maior" << endl;

}