// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float i;
	float j;
	int m;
	int n;
	int opc;
	cout << "Elija una opción: 1.Línea, 2-Rectángulo, 3-Triangulo" << endl;
	cin >> opc;
	switch (opc) {
	case 1:
		cout << "Ingrese la longitud de la línea: " << endl;
		cin >> n;
		for (i=1;i<=n;i++) {
			cout << "*";
		}
		cout << "" << endl;
		break;
	case 2:
		cout << "Ingrese la base del rectangulo: " << endl;
		cin >> m;
		cout << "Ingrese la altura del rectangulo: " << endl;
		cin >> n;
		for (i=1;i<=n;i++) {
			for (j=1;j<=m;j++) {
				cout << "*";
			}
			cout << "" << endl;
		}
		break;
	case 3:
		cout << "Ingrese la base del triángulo: " << endl;
		cin >> n;
		for (i=1;i<=n;i++) {
			for (j=n;j>=1;j--) {
				cout << "*";
			}
			n = n-1;
			cout << "" << endl;
		}
		break;
	default:
		cout << "Acción inválida" << endl;
	}
	return 0;
}

