#include <iostream>
using namespace std;
int main(){
    int n,k, maxi;
    cin >> n;
    int a[n];

    for(int i=1; i<=n;i++){
        cin >> a[i];
    }
    maxi = a[1];
    for(int i=1; i<=n;i++){
        if(a[i]>=maxi){
            maxi = a[i];
            k=i;
        }
    }
    cout << k;
    return 0;
}