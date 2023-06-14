//array create = int array[10]
//array initialize = int array[3]={0,11,1}
//in array to store all block of 0 them write like = int array[100]={0} // array = [0, 0, 0, 0, 0]  
    //[but , only zero store not for 1,2,10,14,....,etc] 
//then we can store any different value = int car[5] = {[0...4] = 7} // car = [7,7,7,7,7]
                                        //int car[ ] = {[0...4] = 7} // car = [7,7,7,7,7]
                                        
   // other way = 
    #include<stdio.h>
    #include<iostream>
    using namespace std;

    int main()
    {
        int size = 8;
        int val = 1;

        // array declaration
        int arr[size];
        int i;

        // initializing array elements
        for (i = 0; i < size ; i++){
            arr[i] = val;
        }

        // print array
        cout << "The array is:" << endl;
        for (i = 0; i < size ; i++){
            cout << arr[i] << endl;
        }

        return 0;
    }

