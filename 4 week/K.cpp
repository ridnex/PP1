#include <iostream>
using namespace std;
int main(){
    int n, m,r=0,c=0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            r=r+a[i][j];
            
        }
        cout << "The sum of row number "<<i+1<<" is "<<r<<'\n';
        r=0;
    }
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            c=c+a[i][j];
        } 
        cout << "The sum of column number "<<j+1<<" is "<<c<<'\n';
        c=0;   
    }
     
}