#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void palindrome(string str){
    string reverse="";
    for (int i = str.length() - 1; i >= 0; i--) {
        reverse+=str[i];
    }
    if (reverse == str){
        cout<<"Es un palindromo";
    } else{
        cout<<"No es un palindromo";
    }
}

void upperCase(string str){
    int contM = 0;
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", caps="";
    for (int i = 0; i < str.length(); i++){
        for (int j = 0; j < upper.length(); j++){
            if (str[i] == upper[j]){
                contM++;
                caps+=str[i];
            }
        }
    }
    cout<<"Exiten: "<<contM<<" mayusculas en tu texo"<<endl;
    if (contM > 0){
        cout<<"Letras Mayusculas en la cadena: "<<caps<<endl;
    }
}

string ascii(string str){
    int x, y;
    string encrypted = "";
    for (int i = 0; i < str.length(); i++){
        x = str.at(i);
        y = x + 3;
        encrypted+=char(y);
    }
    return encrypted;
}

int main(){
    string text;
    int opc;
    cout<<"Ingrese un texto: "<<endl;
    getline(cin, text);
    cout<<"Elija una opcion: \n1-Enontrar las Mayusculas\n2-Encriptacion\n3-Verificar si es un palindromo"<<endl;
    cin>>opc;
    switch(opc){
        case 1:
            upperCase(text);
        break;
        case 2:
            cout<<"Encriptacion: "<<ascii(text)<<endl;
        break;
        case 3:
            palindrome(text);
        break;
        default:
            cout<<"Opcion invalidada"<<endl;
    }
    return 0;
}