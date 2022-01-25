#include <iostream>
#include <sstream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k,n=0,m=0;
    for(int i=0; i<s.size();i++){
        
        
        if(i%2==0){
            stringstream ss;  
            ss << s[i];  
            ss >> k;
            n=k+n;

        }
        else{
            stringstream tt;  
            tt << s[i];  
            tt >> k;
            m=k+m;
        }


    }
    if(n==m){
        cout<<"YES";
    }
    else{
        cout << "NO";
    }
}