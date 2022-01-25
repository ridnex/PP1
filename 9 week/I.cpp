#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string, int>a;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        string t;
        cin >> t;
        a.insert(pair<string, int>(t, i));
    }
    map<string, int>::iterator ss;
    for(int i=1; i<=n; i++){
        int cnt=0;
        for(ss=a.begin(); ss!=a.end(); ss++){
            if(i==ss->second){
                cout<<"new user added"<<endl;
                cnt=1;
            }

        }
        if(cnt==0){
            cout<<"user already exists"<<endl;        
        }             
    }  
}