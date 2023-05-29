#include<iostream>
using namespace std;

//create swap function and create one array or variable   
void swap2(int arr[], int n){

//then three more variable are created
    int start = 0;
    int next = 1 ;
    int end = n-1;

//using while loop for array strating index to end index are looped
    while(start<=end){
        
        //using swap function , it use for swap two number , ex = input {1,2} then output = {2,1}
        swap(arr[start] , arr[next] );
        //so this problem is swapalternate number in array , ex = input {1,2,3,4} then output = {2,1,4,3}
        //so, first index 0 and 1 are swaped then next two index 2 and 3 swap
        //strat = 0 then start+2 = start index change , start = 3 
        start = start+2;
        //same think for next index add 2 and then update next index , next = 4
        next = next+2;

    }
}

//printswap function is print swaped array 
void printswap( int arr[] , int n ){

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){

    int arr[] = {1,2,3,4,5,6};

    swap2(arr , 6 );

    printswap(arr , 6);

    return 0;
}