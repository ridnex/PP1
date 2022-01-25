#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    string t;
    int n;
    int k=0;
    cin >> s >> t >> n;
    int l=s.find(t);
    
    while(l != -1)
    {
        l=s.find(t, l+1);
        k++;
    }
    if(k==n){
        cout<<"YES";
    }
    else{
        cout <<"NO";
    }
    
}