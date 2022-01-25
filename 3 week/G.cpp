#include <iostream>
using namespace std;
int main(){
    int n, mini, maxi, k;
    cin >> n;
    int a[n];

    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    mini = a[0];
    for(int i=0; i<n;i++){
        if(a[i]<=mini){
            mini = a[i];
        }
    }
    maxi = a[0];
    for(int i=0; i<n;i++){
        if(a[i]>=maxi){
            maxi = a[i];
        }
    }
    for(int i=0; i<n;i++){
        if(a[i]==maxi){
            a[i]=mini;
        }
    }
    for(int i=0; i<n;i++){
        cout << a[i] << " ";
    }
    

    return 0;
}