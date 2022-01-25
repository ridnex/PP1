#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, x, k;
    cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }
    cin >> k;
    a.erase(a.begin()+k);
    for(int i=0; i<n-1; i++){
        cout << a[i] << " ";
    }


}