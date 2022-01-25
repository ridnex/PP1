#include <iostream>
using namespace std;
int main(){
    int n, k, s=0 ;
    cin >> n;
    int a[n];

    for(int i=0; i<n;i++){
        cin >> a[i];
    }

    for(int i=0; i<n;i++){
        k=a[i];
        
        if(k==a[i+1] and i<n-1){
            s =s+1;
            a[i+1] = a[i+2];
            
        }
        
        
    }
    cout << s;
    for(int i=0; i<n-s;i++){
        cout << a[i] << " ";
    }
}

    
