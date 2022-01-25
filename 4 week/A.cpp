#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,maxi;
    cin >> n;
    int a[n][n];
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            cin >> a[i][j];
            if(i==0 and j==0){
                maxi=a[0][0];
            }
            
            if(a[i][j]>=maxi){
                maxi=a[i][j];
            }
        }
        
    }
    
    
    cout << maxi;
    return 0;
    

}