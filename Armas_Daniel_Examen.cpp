#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Introduce el maximo valor: ";
    cin>>n;
    for(i = 1; i <=n ; i++){
        for (j = 1; j<= 10; j++){
            cout<<i<<"*"<<j<<"="<<i*j;
            cout<<endl;
        }
    }
    return 0;
}
