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
    int k;
    cin >> k;
    if(find(a.begin(), a.end(), k) != a.end()){
        cout<<"Yes";
    }
    else{
        cout <<"No";
    }
}