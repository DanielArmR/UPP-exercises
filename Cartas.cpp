// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cstdlib>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int c1;
	int c2;
	int c3;
	string carta1;
	string carta2;
	string carta3;
	int suma;
	cout << "De el valor de la carta 1" << endl;
	cin >> carta1;
	cout << "De el valor de la carta 2" << endl;
	cin >> carta2;
	cout << "De el valor de la carta 3" << endl;
	cin >> carta3;
	if ((carta1=="J") || (carta1=="Q") || (carta1=="K")) {
		carta1 = "10";
	}
	if ((carta2=="J") || (carta2=="Q") || (carta2=="K")) {
		carta2 = "10";
	}
	if ((carta3=="J") || (carta3=="Q") || (carta3=="K")) {
		carta3 = "10";
	}
	if ((carta1=="AS") && (carta2=="AS") && (carta3=="AS")) {
		carta1 = "1";
		carta2 = "1";
		carta3 = "11";
	} else {
		if ((carta1=="AS") && ((atof(carta2.c_str())+atof(carta3.c_str()))<=10)) {
			carta1 = "11";
		} else {
			if ((carta1=="AS")) {
				carta1 = "1";
			}
		}
		if ((carta2=="AS") && ((atof(carta1.c_str())+atof(carta3.c_str()))<=10)) {
			carta2 = "11";
		} else {
			if ((carta2=="AS")) {
				carta2 = "1";
			}
		}
		if ((carta3=="AS") && ((atof(carta1.c_str())+atof(carta2.c_str()))<=10)) {
			carta3 = "11";
		} else {
			if ((carta3=="AS")) {
				carta3 = "1";
			}
		}
	}
	c1 = atof(carta1.c_str());
	c2 = atof(carta2.c_str());
	c3 = atof(carta3.c_str());
	suma = c1+c2+c3;
	cout << c1 << " " << c2 << " " << c3 << endl;
	if ((suma==21)) {
		cout << "Ganaste: " << suma << endl;
	} else {
		cout << "Perdiste: " << suma << endl;
	}
	return 0;
}

