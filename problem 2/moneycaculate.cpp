#include<iostream>
using namespace std;

int main(){

    int amount = 1330;
    int RS  ;
    cout << "Enter RS to convert how much Rupees are required "<< endl;
    cin >> RS;

    switch(RS){

        case 100:cout << (amount / 100) << endl;
        break;

        case 50:cout << (amount / 50) << endl;
        break;

        case 20:cout << (amount / 20) << endl;
        break;
    }
    cout << endl;
}