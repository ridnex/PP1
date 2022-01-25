#include <iostream>
using namespace std;
int main(){
    long long n, s=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
        s = s + a[i];
    }
    cout << s;

}