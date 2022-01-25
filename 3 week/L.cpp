#include <iostream>
using namespace std;
int main(){
    int n, m, t;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m], c[n+m];
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=n;i<n+m;i++){    
            
        c[i]=b[i-n];
            
    }
    for (int i = 0; i < n+m; i++) {
        for (int j = 0; j < n+m-1; j++) {
            if (c[j] > c[j + 1]) {
                t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;
            
            }
       }
       
    }

    for(int i=0;i<n+m;i++){
        cout << c[i]<<" ";
    }
}