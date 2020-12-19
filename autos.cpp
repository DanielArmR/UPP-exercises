#include <iostream>

using namespace std;
int main(){
	int j,nAutos;
	float pC[100], mayC, menC;
	cout<<"Ingrese el numero de automoviles ";
	cin>>nAutos;
	for(j=0; j<nAutos; j++){
		cout<<"Ingrese los puntos contaminantes del auto: ";
		cin>>pC[j];
	}
	for(j=0; j<nAutos; j++){
		cout<< "El auto "<<j+1<<" tiene "<<pC[j]<<" puntos"<<endl;
	}
	mayC=pC[0];
	menC=pC[0];
	for(j=0; j<nAutos; j++){
		if(pC[j]>mayC){
			mayC=pC[j];
		}
		if(pC[j]<menC){
			menC=pC[j];
		}
	}
	cout<<"El auto que menos contamina tiene: "<<menC<<endl;
	cout<<"El auto que mas contamina tiene: "<<mayC<<endl;
	return 0;
}
