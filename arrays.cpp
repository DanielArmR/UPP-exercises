#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int n, resp, pos;
    cout<<"Ingrese el numero de elementos del arreglo"<<endl;
    cin>>n;
    float vector[n];
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese un numero en la posicion "<<i<<" : ";
        cin>>vector[i];
    }
    cout<<"Quiere editar un numero? 1-Si 2-No ";
    cin>>resp;
    while ( resp != 1 && resp != 2){
        cout<<"Incorrecto, ingrese de nuevo ";
        cin>>resp;
    }

    if(resp==1){
        float val;
        do{
            cout<<"Ingrese la posicion del elemento ";
            cin>>pos;
            cout<<"Ingrese el nuevo valor: ";
            cin>>val;
            vector[pos] = val;
            cout<<"Quiere editar otro numero? 1-Si 2-No ";
    		cin>>resp;
		    while ( resp != 1 && resp != 2){
		        cout<<"Incorrecto, ingrese de nuevo ";
		        cin>>resp;
		    }
        }while(resp==1);
    }

    cout<<"Quiere borrar un numero? 1-Si 2-No ";
    cin>>resp;
    while ( resp != 1 && resp != 2){
        cout<<"Incorrecto, ingrese de nuevo ";
        cin>>resp;
    }
    if (resp == 1){
        do{
            cout<<"Ingrese la posicion a eliminar ";
            cin>>pos;
            int del = vector[pos];
            for (int i = 0; i < n; i++){
                if (i == pos){
                    while (i<n-1){
                        vector[i] = vector[i + 1];
                        i++;
                    }
                break;
                }
            }
            n--;
            cout<<"Quiere borrar otro numero? 1-Si 2-No ";
    		cin>>resp;
		    while ( resp != 1 && resp != 2){
		        cout<<"Incorrecto, ingrese de nuevo ";
		        cin>>resp;
		    }
        }while(resp==1);
    }

    for (int j = 0; j < n; j++){
        cout<<vector[j]<<endl;
    }
    return 0;
}
