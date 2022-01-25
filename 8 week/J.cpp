#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int>a;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }
    
    sort(a.begin(), a.end());
    
    cout<< a[a.size()-1]-a[0];
    
}