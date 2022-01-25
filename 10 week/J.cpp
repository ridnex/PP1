#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    vector<int>a;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    reverse(a.begin(), a.end());
    rotate(a.begin(), a.end()-m, a.end());
    for(int i=0; i<a.size(); i++){
        cout << a[i]<<' ';
    }

}