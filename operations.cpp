#include <iostream>
#include <string>

using namespace std;

void order_numbers(){
    float numbers[10];
    for (int i = 0; i < 10; i++){
        cout<<"Ingresa un numero: ";
        cin>>numbers[i];
    }
    float temporal;
	for (int i = 0;i < 10; i++){
		for (int j = 0; j< 10-1; j++){
			if (numbers[j] < numbers[j+1]){
			    temporal = numbers[j];
			    numbers[j] = numbers[j+1];
			    numbers[j+1] = temporal;
			}
		}
	}
    float max[3];
    float min[3];
    int j=9;
    for (int i = 0; i < 3; i++){
            min[i] = numbers[j];
            j--;
        }
    for (int i = 0; i < 3; i++){
        cout<<min[i]<<endl;
    }
    j=0;
    for (int i = 0; i < 3; i++){
            max[i] = numbers[j];
            j++;
    }
    for (int i = 0; i < 3; i++){
        cout<<max[i]<<endl;
    }
}

void operations(float number1, float number2){
    float div = number1/number2;
    cout<<"Suma: "<<number1+number2<<endl;
    cout<<"Resta: "<<number1-number2<<endl;
    cout<<"Multiplicion: "<<number1*number2<<endl;
    cout<<"Division: "<<div<<endl;
}

string type_of_triangle(float side1, float side2, float side3){
    if (side1 == side2 && side2 == side3){
        return "equilatero";
    } else if ((side1 == side2 && side2 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1)){
        return "isoceles";
    } else if (side1 != side2 && side2 != side3){
        return "escaleno";
    }
}

int main(){
    float s1, s2, s3;
    float n1, n2;
    cout<<"Ingrese el lado 1 del triangulo: ";
    cin>>s1;
    cout<<"Ingrese el lado 2 del triangulo: ";
    cin>>s2;
    cout<<"Ingrese el lado 3 del triangulo: ";
    cin>>s3;
    cout<<"Es un triangulo "<<type_of_triangle(s1, s2, s3)<<endl;
    order_numbers();
    cout<<"Ingrese un numero: ";
    cin>>n1;
    cout<<"Ingrese otro numero: ";
    cin>>n2;
    operations(n1, n2);
}
