#include <iostream>

using namespace std;

int main(){
	int numero, cont;
	do{
		cout<<"Elija el programa que desea ejecutar: \n 1-Supermercado, \n 2-Tienda, \n 3-Serie de Numeros Impares, \n 4-Serie de Fibonacci,  \n 5-Serie con valores declarados por ti "<<endl;
		do{
			cin>>numero;
			if(numero<=0 || numero>5) cout<<"Opcion invalida"<<endl;
		}while( numero<=0 || numero>5);
		switch(numero){
            case 1:{
                int cantidad, continuar;
                float precio, total=0.0;
                do{
                    do{
                        cout<<"Ingrese el Precio del Producto ";
                        cin>>precio;
                        if(precio<=0){
                            cout<<"Ese precio es invalido"<<endl;
                        }
                    }while(precio<=0);
                    do{
                        cout<<"Ingrese la cantidad del Producto ";
                        cin>>cantidad;
                        if(precio<=0){
                            cout<<"Esa cantidad es invalida"<<endl;
                        }
                    }while (cantidad<=0);
                    total=total+(precio*cantidad);
                    cout<<"Desea Ingresar otro producto? 1- Si 2-No "<<endl;
                    cin>>continuar;
                }while (continuar == 1);
                cout<<"Total  Pagar: $ "<<total<<endl;
            }
            break;
            case 2:{
                int cant;
                float monto, iva ,cambio , pago, totalVen;
                totalVen=0;
                do{
                    do{
                        cout<<"Ingrese el monto de la compra:  ";
                        cin>>monto;
                        if(monto<=0){
                            cout<<"Ese monto es invalido"<<endl;
                        }
                    }while (monto<=0);
                    iva=(monto*0.16);
                    totalVen= totalVen+(monto+iva);
                    cout<<"Total de la compra:  "<<(monto+iva)<<endl;
                    do{
                        cout<<"Ingrese el pago del cliente:  ";
                        cin>>pago;
                        if(pago<(monto+iva)){
                            cout<<"Pago invalido"<<endl;
                        }
                    }while (pago<(monto+iva));
                    cambio= pago-(monto+iva);
                    cout<<"Su Cambio es :  "<<cambio<<endl;
                    do{
                        cout<<"Desea agregar otra compra? Si-1 No-2  "<<endl;
                        cin>>cant;
                    }while ((cant != 1) && (cant != 2));
                }while (cant == 1);
                cout<<"Total de Ventas: "<<totalVen<<endl;
            }
            break;
            case 3:{
                int lim, i;
                do{
                    cout<<"Ingrese el Limite de la Serie:  ";
                    cin>>lim;
                    if (lim<=0) cout<<"Valor no valido"<<endl;
                }while (lim <=0);
                for( i=0; i<=lim; i++ ){
                    if ( i%2  !=0 ) {
                        cout<<i<<endl;
                    }
                }
            }
            break;
            case 4:{
                int val, i;
                int ant=1, sig=1;
                do{
                    cout<<"Ingrese los valores a obtener de la serie de Fibonacci: ";
                    cin>>val;
                }while ( val<=0 );
                cout<<"0"<<endl;
                cout<<ant<<endl;
                for( i=2; i<=val; i++ ){
                    cout<<sig<<endl;
                    sig=ant+sig;
                    ant=sig-ant;
                }
            }
            break;
            case 5:{
                float inicio, incre, lim;
                int i;
                do{
                    cout<<"Ingrese el Inicio de la Serie: ";
                    cin>>inicio;
                }while ( inicio <= 0 );
                do{
                    cout<<"Ingrese el Limite de la Serie: ";
                    cin>>lim;
                }while ( lim <= 0 );
                do{
                    cout<<"Ingrese el Incremento de la Serie: ";
                    cin>>incre;
                }while ( incre<=0 );
                for( i=inicio; i<=lim; i+=incre ){
                    cout<<i<<endl;
                }
            }
            break;
            default:
                cout<<"No esta ingrese un numero del 1 al 5";
            break;
        }
        do{
            cout<<"Quieres intentarlo de nuevo? 1-Si 2-No"<<endl;
            cin>>cont;
        }while((cont != 1) && (cont !=2 ));
    }while(cont == 1);
	return 0;
}
