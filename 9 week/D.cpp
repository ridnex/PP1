#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    int n, y;
    cin >> n >> y;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int cnt=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==y){
            cnt++;
        }
    }

    cout<< cnt;
}