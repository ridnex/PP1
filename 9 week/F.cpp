#include <iostream>
#include <vector>
using namespace std;
int qwe(string s){
    int as=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==')'){
            as++;
        }
        
    }
    return as;
}
int main(){
    vector<char>a;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        a.push_back(s[i]);
    }
    int k=0;
    int l=a.size();
    if(qwe(s)!=l-qwe(s)){
        cout <<"NO";
    }
    else{
        while(k<l){
            for(int i=0; i<a.size(); i++){
                if(a[i]=='('  and a[i+1]==')'){
                    a.erase(a.begin()+i);
                    a.erase(a.begin()+i);
                }
            }
            k++; 
        }
        /*cout <<"size"<< a.size()<<endl;
        for(int j=0; j<a.size(); j++){
                cout << a[j]<< " ";
           }
        */
        if(a.size()==0){
            cout<<"YES";
        }
        else{
            cout << "NO";
        }
    }
}