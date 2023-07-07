#include<iostream>
#include<vector>

using namespace std;

// int count(vector<int> arr2){

//     for(int i = 0 ; i < arr2.size() ; i++){

//         vector<int> counts = reverse(arr2);
//     }
// }

vector<int> reverse(vector<int> arr){

    int start = 0 , end = arr.size()-1;

    int count = 0;
    cin >> count ;

    // for(int i = 0 ; i < arr.size() ; i++ ){}

    while(start < end ){

        if(start < count){

            start = start + 1;
            swap(arr[start] , arr[end]);
            start ++;
            end --;

        }else{

            count ++;  
        }
        return arr;
    }
}

void print(vector<int> arr){

    for(int i = 0 ; i < arr.size() ; i++){

        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> arr ;

    for(int i = 0 ; i < arr.size() ; i++){

        arr.push_back(i);
    }

    vector<int> final = reverse(arr);

    print(final);

}
