#include <iostream>
using namespace std;
int main(){
	int nmr1, nmr2, dnr1, dnr2, maxd, nr1, nr2, i;
	cout<<"Ingrese el Numerador de la fraccion 1 "<<endl;
	cin>>nmr1;
	cout<<"Ingrese el Denominador de la fraccion 1 "<<endl;
	cin>>dnr1;
	cout<<"Ingrese el Numerador de la fraccion 2 "<<endl;
	cin>>nmr2;
	cout<<"Ingrese el Denominador de la fraccion 2 "<<endl;
	cin>>dnr2;
	if(dnr1>dnr2){
		maxd=dnr1;
	}else{
		maxd=dnr2;
	}
	i=maxd;
	while((i%dnr1 !=0) || (i%dnr2 !=0)){
		i++;
	}
	nr1=(i/dnr1)*nmr1;
	nr2=(i/dnr2)*nmr2;
	cout<<"El resultado de la suma es: "<<nr1+nr2<<" / "<<i;
	return 0;
}
