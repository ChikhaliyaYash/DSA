//this code is explain function how to work and what to create function
//code is find power for any number using function
#include<iostream>
using namespace std;

int power(int a , int b){// also write {int power(write arguments , parameters)} and 
    // variable name different (unique) are required like {int power(int num 1 ,int num 2)}

    //you can also write here to create variable, like 
    // int a,b;
    // cin >> a >> b ; 

    int ans = 1;

    for(int i = 1;i<=b;i++){

        ans = ans * a;
    }
    return ans;
}

int main(){

    //this proccess is print the power , so , in this code same remove line then you can print power
    int a,b;
    cin >> a >> b ;

    int answer = power(a,b);
    cout << "answer is" << answer << endl;

    // {this first proccess}
    //cout << "answer is" << power() << endl; 

    // {this second proccess}
    //int ans = power();
    //cout << "answer is" << ans << endl;

    return 0;


}