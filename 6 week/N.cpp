#include <iostream>
using namespace std;

void sqr(int x,int m, int a[100][100]){
   
   /* x=2 m =3
   j<3
   i<2
    
j=0 i=0 

   */
   
    for(int i =0; i<x; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<< " ";

        
        cout<<"\n";
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[n][m];            

        }
    }
    sqr(n, m, a);
    
}
