#include <iostream>
using namespace std;

int sam(int n, int a[],int b[]);


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j and a[i]==a[j]){
                a[j]=-2;
            }
        }
    }
    int b[n];
    for(int i=0;i<n; i++){
        cin>>b[i];
    }
    cout<<sam(n, a, b);
    return 0;
}

int sam(int n, int a[],int b[]){
    int s=0;
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
           if(a[i]==b[j]){
                s++;
              
            }
            
        }  
    } 
    return s;
}

