#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main(){
    int n;
    cin >> n;
    string a[n][n]; 
    int k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            if(i+j==n-1){
                k=i+1;
                string s;
               
                stringstream out;
                out << k;
                out >> s;
                 
                a[i][j]=s;  
                
                
            }
            
            else{
                a[i][j]=".";   
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< a[i][j]<< " ";
        }
    cout <<'\n';
    }
    
}