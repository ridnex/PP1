#include <iostream>
using namespace std;
int main(){
    int n, m=0, a;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        while(a>9){
            if(a%10==0){
                m=m+1;
            }
            a=a/10;
        }
    }
    cout << m;
}