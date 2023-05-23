// text is cheak lowecase , uppercase or number 
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter text t"<<endl;
    cin>>ch;
    //if(ch>= 'a' && ch>= 'z')
    if(ch>= 97 && ch<= 122 ){
        cout<<"its lowercase"<<endl;
    //if(ch>= 'A' && ch>= 'Z')    
    }else if(ch>= 65 && ch>= 90){
        cout<<"its uppercase"<<endl;
    }else if(ch>= 48 && ch>= 0){
        cout<<"its number"<<endl;
    }
}