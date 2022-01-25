#include <iostream>
#include <vector>   
#include <algorithm>   
using namespace std;

int qwe(vector<int>a){
    int k=0;
    for(int i=0; i<a.size(); i++){
        k=k+a[i];
    }
    return k;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int> >a;
    for(int i=0; i<n; i++){
        int q;
        cin >> q;
        vector<int>b;
        for(int j=0; j<q; j++){
            int x;
            cin >> x;
            b.push_back(x);
            
        }
        a.push_back(b);
    }
    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            if(qwe(a[i])>qwe(a[j])){
                swap(a[i], a[j]);
            }
            else if(qwe(a[i])==qwe(a[j])){
                if(a[i].size()>a[j].size()){
                    swap(a[i], a[j]);

                }
                else if(a[i].size()==a[j].size()){
                    sort(a.begin(), a.end());
                }
            }
        }
    }
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}       