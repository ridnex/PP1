#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt=0;
    int k=0, m;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[0]){
            cnt++;
        }
    }
    for(int i=0; i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[i]==s[j]){
                k++;
            }
        }
        
        if(cnt!=k){
            m=0;
            break;
        }
        else{
            k=0;
            m=1;
            continue;
        }
    }  
    if(m==0){
        cout<<"NO";
    } 
    else{
        cout<<"YES";
    }   
}