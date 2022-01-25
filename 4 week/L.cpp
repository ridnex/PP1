#include <iostream>
using namespace std;
int main(){
    int n, m,mini,r, k=0,s;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>a[i][j];
            
        }
    }
    cout<<"coordinates of min elements:"<<'\n';
    for (int j = 0; j < m; j++){
        mini=a[0][j];
        for (int i = 0; i < n; i++){
            
            if(mini>a[i][j]){
                mini=a[i][j]; 
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(mini==a[i][j]){
                r=i;
                s=j;
                k=k+mini;
                mini=mini-1;
            }
        }
        cout<<r+1<<";"<<j+1<<'\n';
        
    }
    cout <<"Their sum:"<<'\n';
    cout <<k;
    return 0;

}