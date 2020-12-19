#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int n, m, resp;
    cout<<"Ingrese el numero de columnas de la matriz: ";
    cin>>n;
    cout<<"Ingrese el numero de filas de la matriz: ";
    cin>>m;
    float matriz[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<"Ingese un valor para ["<<i<<", "<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"Quieres editar un valor? 1-Si 2-No"<<endl;
    cin>>resp;
    while(resp!=1 && resp!=2){
        cout<<"Incorrecto, insgresa de nuevo ";
        cin>>resp;
    }
    if(resp==1){
        int fil, col;
        float val;
        do{
            cout<<"Ingrese la fila del elemento: ";
            cin>>fil;
            cout<<"Ingrese la columna del elemento: ";
            cin>>col;
            cout<<"Ingrese el nuevo valor: ";
            cin>>val;
            matriz[fil][col]=val;
            cout<<"Quieres editar otro valor? 1-Si 2-No"<<endl;
            cin>>resp;
            while(resp!=1 && resp!=2){
                cout<<"Incorrecto, insgresa de nuevo ";
                cin>>resp;
            }
        }while(resp==1);
    }
    for (int i = 0; i < n; i++){
        cout<<endl;
        for (int j = 0; j < m; j++){
            cout<<matriz[i][j]<<" ";
        }
    }
}