#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    map<string, string>a;
  
    vector<pair<string, string> >b;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        string t, r;
        cin >> t >> r;
        a.insert(pair<string, string>(t, r));
    }
    int k;
    cin >> k;
    for(int i=1; i<=k; i++){
        string t, r;
        cin >> t >> r;
      
        b.push_back(pair<string, string>(t, r));
    }
   
    map<string, string>::iterator ll;
        
        for(int i=0; i<k; i++){
            int cnt=0;
            for(ll=a.begin(); ll!=a.end(); ll++){
                if(b[i].first==ll->first and b[i].second==ll->second){
                    cout<<"correct password"<<endl;
                    cnt=1;
                    break;
                }
                else if(b[i].first==ll->first and b[i].second!=ll->second){
                    cout<<"password error"<<endl;
                    cnt=1;
                    break;
                }
               
                
            }
            if(cnt==0){
                cout<<"login error"<<endl;
            }

        }
                   
      
}