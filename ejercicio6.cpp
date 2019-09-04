#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	float quantity, temporal, media, suma = 0, sumaAlpha = 0;
	cout << "N: ";
	cin >> quantity;
	for (int i = 0; i < quantity; i++) {
		cout << 'x' << i + 1 << ": ";
		cin >> temporal;
		suma += temporal;
		sumaAlpha += pow(temporal, 2);
	}
	cout << "sd: " << fixed << setprecision(2) << sqrt(sumaAlpha / quantity - pow(suma / quantity, 2));
}
