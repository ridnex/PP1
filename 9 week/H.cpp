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
        for(ss=a.begin(); ss!=a.end(); ss++){
            cout <<ss->first <<" "<<ss->second<<endl;
        }
}