#include <iostream>
using namespace std;

int poisk(int n, int a[], int x){
    for(int i=0; i<n; i++){
        if(a[i]==x){
            x=-1;
            break;
        }
        

    }
    return x;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(poisk(n, a, x)==-1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
    
}