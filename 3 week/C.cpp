#include <iostream>
using namespace std;
int main(){
    int n, maxi;
    cin >> n;
    int a[n];

    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    maxi = a[0];
    for(int i=0; i<n;i++){
        if(a[i]>=maxi){
            maxi = a[i];
        }
    }
    cout << maxi;
    return 0;
}