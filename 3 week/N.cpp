#include <iostream>
using namespace std;
int main(){
    int s;
    cin >> s;
    int a[s];
    for(int i; i<s; i++){
        cin >> a[i];
        cout << a[i]*a[i]<<" ";
    }
}