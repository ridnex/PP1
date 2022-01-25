#include <iostream>
using namespace std;
int main(){
    int n,maxi,r, k;
    cin >> n;
    int a[n][n];
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            maxi=a[0][0];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j and maxi<=a[i][j]){
                maxi=a[i][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==maxi){
                r=i;
                k=j;
                maxi=maxi+1000;
            }
        }
    }
    cout<<"Maximum element is: "<<maxi-1000<<" with ";
    cout<<"coordinates: "<<r+1<<";"<<k+1;
}
