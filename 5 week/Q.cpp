#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    string t;
    string a;
    cin >> s >> t;
    for(int i=1; i<=t.size()/s.size();i++){
        a=a+s;
    }
    if(a==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

}