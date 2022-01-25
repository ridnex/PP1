#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int>even;
    vector<int>odd;
    for(int i=0; i<a.size(); i++){
        if(a[i]%2==0){
            even.push_back(a[i]);
        }
        else{
            odd.push_back(a[i]);
        }
    }
    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    for(int i=0; i<even.size(); i++){
        cout<< even[i]<<" ";
    }
    for(int i=0; i<odd.size(); i++){
        cout<<odd[i]<< " ";
    }
}