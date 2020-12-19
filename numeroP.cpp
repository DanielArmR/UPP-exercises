#include <iostream>

using namespace std;

int main(){
	int i, num, sum=0, mul=0;
	cout<<"Introduzca el numero que desea verificar si es perfecto: ";
	cin>>num;
	for(i=1; i<num; i++) {
		mul=num%i;
		if(mul==0) {
			sum+=i;
		}
	}
	if(sum==num){
		cout<<"El numero es perfecto.\n", num;
	}
	else{
		cout<<"El numero NO es perfecto.\n", num;	
	}
	return 0;
}
