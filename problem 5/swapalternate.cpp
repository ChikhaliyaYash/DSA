#include<iostream>
using namespace std;

void swap(int arr[], int n){

    int start = 0;
    int next = 1 ;
    int end = n-1;

    while(start<=end){

        swap(arr[start] , arr[next] );
        start = start+2;
        next = next+2;

    }
}

void printswap( int arr[] , int n ){

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){

    int arr[] = {1,2,3,4,5,6};

    swap(arr , 6 );

    printswap(arr , 6);

    return 0;
}