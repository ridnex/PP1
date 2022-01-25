#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int m;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    //cout<<s <<" "<<t<<'\n';
    if(s==t){
        cout << "YES";
    }
    
    else{
        cout << "NO";
    }
    
    
}