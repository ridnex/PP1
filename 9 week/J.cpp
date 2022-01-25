#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair <string, int> >a;
    map<string, int>b;
    for(int i=0; i<n; i++){
        string t;
        int x;
        cin >> t >> x;
        a.push_back(make_pair(t, x));
    }
    for(int i=0; i<n; i++){
        int t=a[i].second;
        for(int j=0; j<n; j++){
            if(a[i].first==a[j].first){
                a[i].second=a[i].second + a[j].second;
            }
        }
        a[i].second=a[i].second-t;
    }
    for(int i=0; i<n; i++){
        b.insert(make_pair(a[i].first, a[i].second));
    }
    map<string, int>::iterator ss;
    for(ss=b.begin(); ss!=b.end(); ss++){
        cout<< ss->first <<" "<<ss->second<<endl;
    }

}