#include <iostream>
using namespace std;
int main(){
    int n, k=0;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(i+j+1==n){
                k=k+a[i][j];
            }
        }
    }
    cout<<k;
}