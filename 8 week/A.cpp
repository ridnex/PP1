#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> a;
    int m, x;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        a.insert(x);
    }
    set<int>::iterator b;
    for(b=a.begin(); b!=a.end(); b++){
        cout <<*b<<" ";
    }
}