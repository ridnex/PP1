/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    string t=s;
    reverse(s.begin(), s.end());
    if(t==s){
        cout<<"Yes";
    }
    else{
        cout << "No";
    }
    
}
*/

#include <iostream>
#include <string>
using namespace std;

int qwe(string s, int i, int k){
    if(s[i]!=s[k-1]){
        return 0;
    }
  
    else{
        s.erase(i, 1);
        s.erase(k-1,1);
        return(s, i+1, k-1);
    }

}
int main(){
    string s;
    cin >> s;
    int k=s.size();
    if(k==1){
        cout<<"Yes";
    }
    else{
        if(qwe(s, 0, k)==0){
            cout <<"No";
        }
        else{
            cout << "Yes";
        }
    }
}