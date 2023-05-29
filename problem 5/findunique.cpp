#include<iostream>
using namespace std;

void unique(int arr[] ,int brr[] , int n){

    int match = 0; 
    for(int i = 0 ; i < n ; i++){

            if(arr[i] != brr[i]){
                cout << brr[i] << endl;
            }
    }

}

void printarray(int arr[] ,int brr[] , int n){

    for(int i = 0 ; i < n ; i++){

        cout << arr[i] << " ";
        cout << brr[i] << " " << endl;
    }
    cout << endl;
}

int main(){

    int arr[] = {1,2,3,4,5,6};
    int brr[] = {1,22,3,4,5,6};

    unique(arr,brr, 6);

    printarray(arr,brr, 6);

    return 0;

}