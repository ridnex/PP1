#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,maxi,k=0;
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
    int t=maxi;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(a[i][j]==a[i][j+1]){
                k++;
                
            }
            
        }
        if(a[i][n-1]==a[i+1][0]){
                k++;
            }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j]==t){
                a[i][j]=0;
                
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++){
            if(i==0 and j==0){
                maxi=a[0][0];
            }
            if(a[i][j]>=maxi){
                maxi=a[i][j];
            }
        }
        
    }
    
    if(k+1==n*n){
        cout<<"0";
    }
    
    else{
        cout << maxi;
    }
    

}