//give a string and in this string find space then , replaced @ or 4 
#include<iostream>
#include<string>
using namespace std;

string replaceSpaces(string &str){
	string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' '){
            str.push_back('@');
            str.push_back('4');
            str.push_back('0');
        }
        else
        {
            str.push_back(str[i]);
        }
    }
    return str;
}