//sum of all elements in array 
#include<iostream>
using namespace std;

int  sumarray(int sum[] , int n){

    int finalsum = 0;

    for(int i = 0 ; i < n ; i++){

        finalsum = sum[i] + finalsum ;

    }  

    return finalsum;

}
int main(){

    int size;
    cout << "enter size: " << endl;
    cin >> size;
    int sum[100];
    cout << " enter array elements: " << endl;

    for(int i = 0 ; i < size ; i++){

        cin >> sum[i];

    }

    cout << "sum is" << sumarray(sum,size) ; 
    return 0;
}