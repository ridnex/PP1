#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.size();i++){
        if(s[i]>90){
            s[i]=s[i]-32;
        }
        cout<<s[i];
    }
}