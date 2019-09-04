#include <iostream>
#include <string>
using namespace std;
char tipo;
int numAsegurados;
int pagoMensual;

int main() {
	cout << R"(
	Tipo | MaxPersonas | Pago Mensual
	  A	 |     8       | S/. 40.00
	  B	 |     6       | S/. 30.00
	  C	 |     4       | S/. 20.00
	  D	 |     2       | S/. 10.00
)";
	do {
		cout << "Por favor, elija el tipo de seguro que tiene: ";
		cin >> tipo;
	} while ( tipo != 'A' && tipo != 'B' && tipo != 'C' && tipo != 'D');
	switch (tipo) {
	case 'A':
		pagoMensual = 40;
		do {
			cout << "Ahora ingrese el numero de asegurados: ";
			cin >> numAsegurados;
		} while (numAsegurados < 0);
		if (numAsegurados > 8){
			pagoMensual = pagoMensual + ((numAsegurados - 8) * 7.00);
		}
		break;
	case 'B':
		pagoMensual = 30;
		do {
			cout << "Ahora ingrese el numero de asegurados: ";
			cin >> numAsegurados;
		} while (numAsegurados < 0);
		if (numAsegurados > 6) {
			pagoMensual = pagoMensual + ((numAsegurados - 6) * 7.00);
		}
		break;
	case 'C':
		pagoMensual = 20;
		do {
			cout << "Ahora ingrese el numero de asegurados: ";
			cin >> numAsegurados;
		} while (numAsegurados < 0);
		if (numAsegurados > 4) {
			pagoMensual = pagoMensual + ((numAsegurados - 4) * 3.00);
		}
		break;
	case 'D':
		pagoMensual = 10;
		do {
			cout << "Ahora ingrese el numero de asegurados: ";
			cin >> numAsegurados;
		} while (numAsegurados < 0);
		if (numAsegurados > 2) {
			pagoMensual = pagoMensual + ((numAsegurados - 2) * 3.00);
		}
		break;
	}
	cout << "Su monto mensual a pagar es: " << pagoMensual << endl;
}
