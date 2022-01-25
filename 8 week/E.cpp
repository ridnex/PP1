#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, x, k, l;
    cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }
    cin >> k>>l;
    a.erase(a.begin()+k, a.begin()+l+1);
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }


}