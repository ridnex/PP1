#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool qwe(int x){
    if(x<0){
        x=x*(-1);
    }
    if(x==0){
        return false;
    }
    int cnt=0;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        return true;
    }
    return false;

}
int main(){
    int n;
    cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int k=count_if(a.begin(), a.end(), qwe);
    cout << k;
}