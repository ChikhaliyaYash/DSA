//pivot means find minimum element in array using binary search
#include<iostream>
using namespace std;

int pivot(int arr[] , int n){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; //return e and s any one can returned , because final starting index and end index are same one element in stop  
}


int main(){

    int arr[7] = {1,2,3,4,5,6,7};

    cout << "pivot is " << pivot(arr , 7) << endl ;

}