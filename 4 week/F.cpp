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


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if(a[i][j]==maxi){

                cout << i+1 << " "<< j+1;
                maxi=maxi+1 ;

            }
            
            
        }
    }
    
    
 
    return 0;
    

}