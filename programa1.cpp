#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
int main(){
    int opc, cont;
    do{
        cout<< "\t\tMenu Programas Estructuras de decision"<<endl;
        cout<< "\t1-Sueldo de un Trabajador"<<endl;
        cout<< "\t2-Tienda"<<endl;
        cout<< "\t3-Diagnostico Anemia"<<endl;
        cout<< "\t4-Numero medio"<<endl;
        cout<< "\t5-Juego del 21"<<endl;
        do{
            cout<<"Ingrese una opcion"<<endl;
            cin>>opc;
            if(opc<=0 || opc>5) cout<<"Opcion invalida"<<endl;
        }while(opc<=0 || opc>5);
        switch(opc){
            case 1:
                int cantH, horasExt, cant;
                float salarioH, pagoExtra, pago, pagoT, doblePago,t;
                cout<< "Ingrese el salario del trabajador por hora: ";
                cin>>salarioH;
                cout<<"Ingre la cantidad de horas trabajadas: ";
                cin>>cantH;
                if(cantH<=40){
                    pago=cantH*salarioH;
                    pagoT=pago;
                }else{
                    horasExt=cantH-40;
                    if (horasExt<=8){
                        pagoExtra=horasExt*(salarioH*2);
                        pago=40*salarioH;
                        pagoT=pago+pagoExtra;
                    }else{
                        cant=horasExt-8;
                        t=cant*(salarioH*3);
                        pago=40*salarioH;
                        doblePago=8*(2*salarioH);
                        pagoT=pago+doblePago+t;
                    }
                }
                cout<<"Pago total: "<<pagoT<<endl;
            break;
            case 2:
                int num;
                float costo,descuento,total;
                cout<<"Ingrese el costo de su compra sin descuento: ";
                cin>>costo;
                cout<<"Ingrese el numero de bolita que tiene: ";
                cin>>num;
                if(num==1){
                    descuento=0;
                }else if(num==2){
                    descuento=costo*0.1;
                }else if(num==3){
                    descuento=costo*0.25;
                }else if(num==4){
                    descuento=costo*0.5;
                }else if(num==5){
                    descuento=costo;
                }
                total=costo-descuento;
                cout<<"El costo de su compra es: "<<total<<endl;
            break;
            case 3:
                int edad,meses,resp, sexo;
                float nivelH;
                cout<<"Ingrese el sexo del paciente: (1)Masculino (2)Femenino";
                cin>>sexo;
                cout<<"Ingrese el nivel de Hemoglobina: ";
                cin>>nivelH;
                cout<<"El tiene meses de nacer? 1-Si 2-No ";
                cin>>resp;
                if(resp==1){
                    cout<<"Ingrese los meses del paciente: ";
                    cin>>meses;
                    if((meses==1 && nivelH<13) || (meses>1 && meses<=6 && nivelH<10) || (meses>6 && meses<=12 && nivelH<11)){
                        cout<<"Tiene anemia"<<endl;
                    }else{
                        cout<<"No tiene anemia"<<endl;
                    }
                }else{
                    cout<<"Ingrese la edad del paciente: ";
                    cin>>edad;
                    if((edad>1 && edad<=5 && nivelH<11.5) || (edad>5 && edad<=10 && nivelH<12.6) || (edad>10 && edad<=15 && nivelH<13) || (edad>15 && sexo==2 && nivelH<12) || (edad>15 && sexo==1 && nivelH<14)){
                        cout<<"Tiene anemia"<<endl;
                    }else{
                        cout<<"No tiene anemia"<<endl;
                    }
                }
            break;
            case 4:
                float n1,n2,n3,medio;
                medio=0;
                cout<< "Ingrese el numero 1: ";
                cin>>n1;
                cout<< "Ingrese el numero 2: ";
                cin>>n2;
                cout<< "Ingrese el numero 3: ";
                cin>>n3;
                if(n1==n2 && n1==n3){
                    cout<< "Son iguales los tres numeros"<<endl;
                }else{
                    if((n1<n2 && n1>n3) || (n1<n3 && n1>n2)){
                        medio=n1;
                    }else if((n2<n1 && n2>n3) || (n2<n3 && n2>n1)){
                        medio=n2;
                    }else if((n3<n1 && n3>n2) || (n3<n2 && n3>n1)){
                        medio=n3;
                    }
                    cout<<"El numero medio es: "<<medio<<endl;
                }
            break;
            case 5:
                int c1, c2, c3;
                string carta1, carta2, carta3;
                int suma;
                cout << "De el valor de la carta 1" << endl;
                cin >> carta1;
                cout << "De el valor de la carta 2" << endl;
                cin >> carta2;
                cout << "De el valor de la carta 3" << endl;
                cin >> carta3;
                if ((carta1=="J") || (carta1=="Q") || (carta1=="K")) {
                    carta1 = "10";
                }
                if ((carta2=="J") || (carta2=="Q") || (carta2=="K")) {
                    carta2 = "10";
                }
                if ((carta3=="J") || (carta3=="Q") || (carta3=="K")) {
                    carta3 = "10";
                }
                if ((carta1=="AS") && (carta2=="AS") && (carta3=="AS")) {
                    carta1 = "1";
                    carta2 = "1";
                    carta3 = "11";
                } else {
                    if ((carta1=="AS") && ((atof(carta2.c_str())+atof(carta3.c_str()))<=10)) {
                        carta1 = "11";
                    } else {
                        if ((carta1=="AS")) {
                            carta1 = "1";
                        }
                    }
                    if ((carta2=="AS") && ((atof(carta1.c_str())+atof(carta3.c_str()))<=10)) {
                        carta2 = "11";
                    } else {
                        if ((carta2=="AS")) {
                            carta2 = "1";
                        }
                    }
                    if ((carta3=="AS") && ((atof(carta1.c_str())+atof(carta2.c_str()))<=10)) {
                        carta3 = "11";
                    } else {
                        if ((carta3=="AS")) {
                            carta3 = "1";
                        }
                    }
                }
                c1 = atof(carta1.c_str());
                c2 = atof(carta2.c_str());
                c3 = atof(carta3.c_str());
                suma = c1+c2+c3;
                cout << c1 << " " << c2 << " " << c3 << endl;
                if ((suma==21)) {
                    cout << "Ganaste: " << suma << endl;
                } else {
                    cout << "Perdiste: " << suma << endl;
                }
            break;
        }
        do{
            cout<<"Quieres intentarlo de nuevo? 1-Si 2-No"<<endl;
            cin>>cont;
        }while((cont != 1) && (cont !=2 ));
    }while(cont==1);
    return 0;
}