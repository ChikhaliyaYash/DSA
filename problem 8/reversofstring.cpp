#include<iostream>
#include<string>
#include<vector>
using namespace std;

 bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }

bool singleword(string a){

    string word = " ";
    for(int i = 0 ; i < a.length() ; i++){

        if(valid(a[i])){

            word.push_back(a[i]);
        }
    }

}

bool revers(string s){

    std::string words = " ";
    int s = 0;
    int e = words.length() - 1;
    
    for(int i = 0 ; i < words.length() ; i++){

        words[i] = singleword(std::words[i]);
    }
}