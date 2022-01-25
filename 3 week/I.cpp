#include <iostream>
using namespace std;
int main(){
    int n, q, w,s,k;
    cin >> n >> q >> w;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    k=w-q+1;
    for(int i=q; i<q+k/2; i++){
        s=a[i];
        a[i]=a[w + q- i];
        a[w + q -i]=s;
    }    
    
    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }


}