//this problem is find in array of mountain array peak . Ex = arr[] = {0,10,5,2} so. in this array peak index is index[1]. 
//so algorithm is a work same conditions (total 3 conditions her) first is start index to up side go condition is arr[mid] < arr[min+1] , second end index to up side go condition is arr[mid] > arr[mid+1] , third is peak condition is 
//leftside arr[mid] < arr[mid + 1] > arr[mid] right side of mountain . 


#include<iostream>
using namespace std;

int findPeak(int arr[], int n) {

    int s =0, e = n-1;
    int mid = s + (e-s)/2; // mid same times this type of value find like 2.1 . so, in this case variable is integer. so , final value is 2. 

    while(s<e) {
        // cout<<" s " << s <<" e " << e << endl;
        if(arr[mid] < arr[mid+1]){
            s = mid+1; 
        }
        else{
            e = mid; // end index is mid index 
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){

   int arr[6] = {4,3,5,1,2,9};

    cout << " peak index is " << findPeak(arr , 6) << endl ;

}


//this code is use vector --> this is a leetcode problem 

// #include<vector>
// using namespace std;

// class Solution {
// public:
  
//     int find_pivot(vector<int> v) {
// 	int s = 0, e = v.size() - 1;
// 	int mid=(s + e) / 2;
// 	while (s < e)
// 	{
// 		if(v[mid] < v[mid+1])
//      			s=mid+1;
//     		else
//       			e = mid;
    
// 		mid = (s + e) / 2;
// 	}
// 	return s;
//     }
//     int peakIndexInMountainArray(vector<int>& arr) {
//         return find_pivot(arr);
//     }
// };