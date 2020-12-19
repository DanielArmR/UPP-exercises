#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
int main(){
	int hora,min,seg;
	cout<<"\t\t\tRELOJ DIGITAL"<<endl;
	cout<<"Ingrese la Hora"<<endl;
	cin>>hora;
	cout<<"Ingrese los minutos"<<endl;
	cin>>min;
	cout<<"Ingrese los segundos"<<endl;
	cin>>seg;
	while(hora<=23){
		while(min<=59){
			while(seg<=59){
				gotoxy(50,10);
				if(hora>9){
					cout<<hora;
				}else{
					cout<<"0"<<hora;
				}
				if(min>9){
					cout<<":"<<min;
				}else{
					cout<<":0"<<min;
				}
				if(seg>9){
					cout<<":"<<seg;
				}else{
					cout<<":0"<<seg;
				}
				seg++;
				Sleep(1000);
			}
			seg=0;
			min++;
		}
		min=0;
		hora++;
		if(hora==24){
			hora=0;
		}
	}
}
