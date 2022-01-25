#include <iostream>
using namespace std;

int sds(string s){
    int str=0;
    for(int i=0; i<s.size(); i++){
        if(int(s[i])%2==1){
            str++;
        }
    }
    return str;
}
int main(){
    string s;
    cin >> s;
    if(sds(s)==0){
        cout<<"Valid";
    }
    else{
        cout<<"Not valid";
    }

    return 0;
}