#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }
    
    sort(a.begin(), a.end());
    int k;
    cin >> k;
    
    a.erase(a.begin()+k, a.end());
    
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    
}