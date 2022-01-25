#include <iostream>
using namespace std;
int main(){
    int x, n, maxi;
    cin >> x >> n;
    int a[x];
    for(int i=0; i<x;i++){
        cin >> a[i];
    }
    maxi = a[0];
    for(int i=0; i<x;i++){
        if(a[i]>=maxi){
            maxi = a[i];
            
        }
        
    }
    if(maxi<n){
        cout << x;
    }
    else{
        for(int i=1; i<=x;i++){
            if(a[i]>n){
            cout << i;
            break;
            }
            //else if(a[i]=n){
           //     cout << i;
           // }
        }

    }
    

}