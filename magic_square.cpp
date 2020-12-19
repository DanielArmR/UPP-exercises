#include <iostream>
#include <cmath>

using namespace std;

void create_square(int side){
    int n[side][side];
    int newRow, newCol;
    for(int i = 0; i < side; i++){
    	for(int j = 0; j < side; j++){
      		n[i][j] = 0;
    	}
  	}
  	int i= 0;
	int j= side/2;
    for(int value = 1; value<=pow(side, 2); value++){
        n[i][j] = value;
        newRow = (i - 1) % side;
        newCol = (j + 1) % side;
        if(newRow == -1){
        	newRow = side-1;
		}
        if(n[newRow][newCol] == 0 ){
        	i = newRow;
        	j = newCol;
        } else{
            i = (i+1+side) % side;
        }
    }
    for(int x=0; x<side; x++){
        for(int y=0; y<side; y++){
            cout << n[x][y]<<" ";
        }
        cout << endl;
    }
    cout<<"Horizontal sums"<<endl;
    for(int x=0; x<side; x++){
        int sum_hor = 0;
        for(int y=0; y<side; y++){
            sum_hor += n[x][y];
            cout << n[x][y]<<" + ";
        }
        cout<<"= "<<sum_hor<<endl;
    }
    cout<<"Vertical sums"<<endl;
    for(int y=0; y<side; y++){
        int sum_ver = 0;
        for(int x=0; x<side; x++){
            sum_ver += n[x][y];
            cout << n[x][y]<<" + ";
        }
        cout<<"= "<<sum_ver<<endl;
    }
    cout<<"Sums of the diagonal"<<endl;
    int p1=0, p2=0;
    int sum_dig= 0;
    for(int val=0; val<side; val++){
        sum_dig += n[p1][p2];
        cout<<n[p1][p2]<<" + ";
        p1++;
        p2++;
        if(val == side-1){
            cout<<" = "<<sum_dig<<endl;
        }
    }
    p1=side-1, p2=0;
    int sum_dig2= 0;
    for(int val=0; val<side; val++){
        sum_dig2 += n[p1][p2];
        cout<<n[p1][p2]<<" + ";
        p1--;
        p2++;
        if(val == side-1){
            cout<<" = "<<sum_dig2<<endl;
        }
    }
}

int magic_number(int n){
    int magic;
    return magic = ((n * (pow(n, 2)+1))/2);
}

bool is_odd(int number){
    if ((number % 2 != 0) && (number!=1)){
        return true;
    } else {
        return false;
    }
}

int main(){
    int number = 0;
    do{
        cout<<"Enter the size of square: ";
        cin>>number;
    }while(is_odd(number) == 0);
    cout<<"Creating a square of "<<number<<"x"<<number<<endl;
    cout<<"Magic number: "<<magic_number(number)<<endl;
    create_square(number);
    return 0;
}