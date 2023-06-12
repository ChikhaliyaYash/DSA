//Find any single input given and find square root using binary search. Ex = 101 = 10.049 , output are get in point or without point value get. that is a problem.  

#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) { // THis function is find square root, and use of [long long int] because , it's a out of int capacity like input is= 1000000 this type of element are out of integer. so, her long long int are use. 

 // this type of problem in use {search space} means in input is 101. so, search space means 0 to 101 in this two start and end point in which alive 101 square are ans. then find 37 input give then 0 to 37 in alive ans like Ex = o to 37 and 37 square root is 6.082 this value alive in 0 to 37.  
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2; // her use long long int
        
        long long int ans = -1; // her use long long int
        while(s<=e) {
            
            long long int square = mid*mid; // her use long long int
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) { // this function is proper find square root of in float or double type value like = 101 = 10.049
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) { // this forloop is get point value , Why ? , because it is 37 add point value then compered or condition are false factor value are updated and next point value are updated like = 0.1 , 0.2 , 0.01 , 0.02 etc. her precision variable use because , it how much time update value for factor .
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){ // that forloop is compered first get square value like first step is multiplied integer square root value j*j and compered n , Ex = n = 37 so integer value is 6 and then j = 6 and 6 * 6 = 36 , so condition is true then update ans value then add factor value like first time factor value is 0.0 then update factor = 0.1 , 6 + 0.1 = 6.1 , then Multiplication 6.1 * 6.1 = 37.21 , her condition is false , then go to get updated factor value and compered and add factor 
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}