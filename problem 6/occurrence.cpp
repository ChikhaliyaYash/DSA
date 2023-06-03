//given array in a one element for find left most occurrence and right most occurrence
//Ex = size of array = 8 and find element = 2 , array = {1,3,3,2,2,2,2,2} , so, output is left most occurrence is 3 index and right most occurrence is 7 index
#include <iostream>
using namespace std;

void occurrenceLeft(int arr[] , int n , int size){

    int start = 0;
    int end = size - 1;
    int index = 0; 

    for(int i = 0 ; i < size ; i++){

        if(arr[i] == n){

            index = arr[i];
            cout << "left occurrence is " << index << endl;
            if(arr[i] == n){

                cout << "right occurrence is " << arr[i] << endl;
            }
        }
    }

}

// void occurrenceRight(int arr[] , int n , int size){

    

// }

int main(){

    int arr[9] = {1,3,3,2,2,3,2,2,2};

    occurrenceLeft(arr , 2 ,9);
    cout << occurrenceLeft << endl;
    // occurrenceRight(arr , 2 , 9);

    

}