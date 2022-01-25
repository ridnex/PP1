#include <iostream>
#include <string>
using namespace std;

int slpo(string a){
    int cnt=0;
    for(int i = 0; i < a.size(); i++)
    {
        if(int(a[i])>=48 and int(a[i])<=57){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string a;
    cin >> a;
    int n;
    cin>>n;
    if(slpo(a)>=n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}