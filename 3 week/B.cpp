#include <iostream>
using namespace std;
int main(){
    int n, k=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
        if(a[i]>0){
            k = k+ 1;
        }
    }
    cout << k;
    return 0;
}