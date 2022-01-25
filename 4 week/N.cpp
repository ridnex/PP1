#include <iostream>
using namespace std;
int main(){
    int n, k=0;
    cin >> n;
    int a=2;
    while (a<=n){
        for(int j=1;j<=a;j++){
            if(a%j==0){
                k++;
            }
            else{
                continue;
            }
            
        }
        if(k==2){
            cout<<a<<" is prime"<<'\n';
            }
        a++;
        k=0;
        
    }
    
}