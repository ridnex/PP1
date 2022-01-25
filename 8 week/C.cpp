#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }
    int q, w, t;
    cin >> q >> w;
    reverse(a.begin()+q, a.begin()+w+1);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

}