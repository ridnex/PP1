#include <iostream>
using namespace std;
int main(){
    int n, m=0, a, k=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        
        if(a%2==0){
            m=m+1;
        }
        else if(a%2==1){
            k=k+1;
        }
    }
    cout << m <<" "<< k;
}
