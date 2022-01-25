#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    string t=s;
    string m;


    for(int i=0; i<s.size();i++){   
        s.erase(i,1);
        m=s;
        reverse(m.begin(),m.end());
        if(m==s){
            cout << "YES";
            break;
        }
        else{
            s=t;
        }
        
        
        
    }
    
    if(m!=s){
        cout<<"NO";
    }
    return 0;
}