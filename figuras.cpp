#include<iostream>
using namespace std;

int main() {
	int i,j,n;
	int opc;
	cout<<"Elija una opcion: 1.Linea, 2-Rectangulo, 3-Triangulo"<<endl;
	cin>>opc;
	switch (opc) {
		case 1:
			cout<<"Ingrese la longitud de la linea: "<<endl;
			cin >> n;
			for(i=1; i<=n; i++){
				cout << "*";
			}
		cout << "" << endl;
		break;
		case 2:
			int m;
			cout<<"Ingrese la base del rectangulo: "<<endl;
			cin>>m;
			cout<<"Ingrese la altura del rectangulo: "<<endl;
			cin>>n;
			for(i=1; i<=n; i++){
				for(j=1; j<=m; j++){
					cout<<"*";
				}
				cout<<endl;
			}
		break;
		case 3:
			cout<<"Ingrese la base del triangulo: "<<endl;
			cin>>n;
			for(i=n; i>0; i--) {
				for(j=0; j<i ; j++) {
					cout<<"*";
				}
				cout<<endl;
			}
		break;
		default:
			cout << "Acción inválida" << endl;
	}
	return 0;
}

