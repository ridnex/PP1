#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n;i++){
        cin >> x;
        a.push_back(x);
    }

    int q, w;
    cin >> q >> w;

    a.insert(a.begin()+q, w);

    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
}