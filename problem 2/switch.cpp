//this is a code example of how to switch work
#include<iostream>
using namespace std;

int main(){

    char ch = '2';
    char ch2 = '3';
    int num = 1 ;

    switch(num * 2){//in switch case can't use for string and flout variable {switch(any expretion write here)}

        case 2: cout << "First" << endl;
                cout << "Frist one more time print" << endl;
                break;

        case '2': cout << "second" << endl;
                  break; 

        case '3': switch(num){
            case 1 : cout << "value of num is" << num <<endl;
            break;
        } 
        break;

        default : cout << "it's a default case " << endl;   
    }
    cout << endl;
}
