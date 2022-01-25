#include <iostream>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    int A[n];
    for (int i=0;i<n; i++){
        cin >> A[i];
        if (A[i]%2==1){
            cout << A[i] << " ";
        }
        
    }
    return 0;
}   