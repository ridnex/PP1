#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, string>b;
    int n;
    cin >> n;
    int c=0;
    string q;
    for(int i=1; i<=n; i++){
        cin >> q;
        b.insert(pair<int, string>(i, q));
    }
    map<int, string>::iterator it;
    for(it=b.begin(); it!=b.end(); it++){
        string t=it->second;
        int cnt=0;
        map<int, string>::iterator ss;
        for(ss=b.begin(); ss!=b.end(); ss++){
            if(t==ss->second){
                cnt++;
            }
        }
        if(cnt==3){
            c++;
        }
    }
    cout << c/3;
}