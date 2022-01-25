#include <iostream>
using namespace std;
int main(){
    int n, m, k=0, mini;
    cin >> n >> m;
    int a[n][m];
    mini=1000000;
    for(int i=0;i < n; i++){
        for (int j =0 ; j < m; j++){
            cin >> a[i][j];
            
        }
        
    }
    
    for (int i = 0; i < n; i++){
        for (int j =0 ; j < m; j++){
            k=k+a[i][j];
            
        }
        if(k<=mini){
            mini=k;
            
            
        }
        k=0;
        
    }
    for(int i=0;i < n; i++){
        for (int j =0 ; j < m; j++){
            k=k+a[i][j];
        }
        if(k==mini){
            cout << i+1;
            
                
            mini=mini-1;
            
        }
        k=0;
    }
    return 0;
}