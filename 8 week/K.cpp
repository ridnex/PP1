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
    int k, cnt=0;
    cin >> k;

    reverse(a.begin(), a.end());

    for(int i=0; i<k; i++){
        cnt=cnt+a[i];
    }
    cout << cnt;
    
}