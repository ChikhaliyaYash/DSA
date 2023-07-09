//how to find string length [first solution]

#include<iostream>
using namespace std;
int main() {
    int i, count = 0;
    string str = "Scaler";
    for (i = 0; str[i]; i++) {
        count++;
    }
    cout << "The length of the string is " << count << endl;
}    

//second solution of find string length using function [.size[] , .length[]] 

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char string[] = "I love C++";
    cout << "Length of the given string is "<< strlen(string) << endl;
}