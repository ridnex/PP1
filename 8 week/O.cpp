#include <iostream>
#include <set>
using namespace std;
int main(){
    set<char> a;
    
    string x;
    cin >> x;
    for(int i=0; i<x.size();i++){
        if(x[i]<=90){
            x[i]=x[i]+32;
        }
    }

    for(int i=0; i<x.size(); i++){
        a.insert(x[i]);
    }
    cout << a.size()<<endl;
    set<char>::iterator b;
    for(b=a.begin(); b!=a.end(); b++){
        cout <<*b<<" ";
    }
}