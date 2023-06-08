// given array in a one element for find left most occurrence and right most occurrence
// Ex = size of array = 8 and find element = 2 , array = {1,3,3,2,2,2,2,2} , so, output is left most occurrence is 3 index and right most occurrence is 7 index

// one more QUE for binary search => find total number of occurrence , so logic are same but , her counting required for total number of occurrence find , first step is find last and first occurrence and last and first occurrence index are subtracting then 1 add like that is = lastindex - firstindex + 1;


#include<iostream>
#include <vector>
using namespace std;
// int firstOcc(vector<int> &arr, int n, int key)
int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

// int lastOcc(vector<int> &arr, int n, int key)
int lastOcc(int arr[], int n, int key){

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int arr[7] = {1, 2, 3, 4, 4, 4, 4};

    cout << "first Occ " << firstOcc(arr, 7, 4) << endl;
    cout << "last Occ " << lastOcc(arr, 7, 4) << endl;

    int total = lastOcc(arr, 7, 4) - firstOcc(arr, 7, 4) + 1;
    cout << "total number of occurrence " << total << endl; 

     return 0;
}

/// this use for vector = vector is same work of array , and use pair = it's use for two value insert using pair 

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int,int> p;
//     p.first = firstOcc(arr, n, k);
//     p.second = lastOcc(arr, n, k);

//     return p;
// }