#include <iostream>
using namespace std;
int main(){
    long long a, b, c, s=0;
    cin >> a >> b >> c;
    int r[a];
    for(int i=1; i<=a;i ++){
        cin >> r[i];
    }
    for (int i=b; i<=c; i++){
        s= s+r[i];
    }
    cout << s;



}