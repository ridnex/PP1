#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n=0,m=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=65 and s[i]<=90){
            n++;
        }
        else{
            m++;
        }
    }
    
    cout << m <<" "<<n;
    
}