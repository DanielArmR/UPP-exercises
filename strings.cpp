#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
    string str, mayus="", encr, volt;
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int cntM=0;
    cout<<"Escribe una cadena"<<endl;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++){
        for (int j = 0; j < upper.length(); j++){
            if (str[i] == upper[j]){
                cntM++;
                mayus+=str[i];
            }
        }
        int x = str.at(i);
        int y = x + 3;
        encr+=char(y);
    }
    cout<<"Existen "<< cntM<<" Mayusculas en la cadena"<<endl;
    if(cntM >0 ){
    	cout<<"Las Mayusculas son: "<<mayus<<endl;
	}
    cout<<"Encriptacion: "<<encr<<endl;
    for(int p = str.size() -1 ; p>=0 ; p--){
    	volt+=str[p];
	}
	if(volt == str){
		cout<<"Es un palindromo";
	}
	return 0;
}
