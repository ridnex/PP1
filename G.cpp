#include <iostream>
using namespace std;
int main(){
    int n,maxi=-10000000, a;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;   
        if(a>=maxi){
            maxi = a;
        }
    }
    cout << maxi;
}
