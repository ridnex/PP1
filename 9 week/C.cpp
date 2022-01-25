#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int cnt=0;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if((v[i]==v[i+1])and (i+1!=v.size()) and v[i]!=-1){
            cnt++;
            for( int j=i+1; j<v.size(); j++){
                if(v[i+1]==v[j] or j==v.size()-1){
                    v[i+1]=-1;
                   
                }
                
            }
            
           
        }

    }

    cout<< cnt;
}