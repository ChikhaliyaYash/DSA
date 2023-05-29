#include<iostream>
using namespace std;

void duplicate(int arr[] , int n){

    int start = 0;
    int end = n-1;
    int next = 1;
    int duplicatefind = 0;

    for(int i = 0 ; i < n ; i++){

            if(start == next){
                cout << arr[i] << endl;
                next++;
        }

    }

}

void printduplicate(int arr[] , int n){

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";  
    }
    cout << endl; 

}

int main(){

    int  arr[] = {1,2,2,3,4,5,5,6,6};

    duplicate(arr , 9);

    printduplicate(arr , 9);

    return 0;

}