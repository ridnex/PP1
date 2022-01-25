#include <iostream>
using namespace std;
int main(){
    string s;
    int n, m;
    cin >> s >> n >> m;
    for(int i=n; i<=m; i++){
        cout<<s[i];
    }
}