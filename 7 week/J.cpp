/*#include <iostream>
using namespace std;
int main(){
    string s;
    int k=0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        k=k+(int(s[i])-48)/2;
    }
    cout << k;
}
*/
#include <iostream>
using namespace std;
int sum(string s);
int main(){
    string s;
    cin >> s;
    cout <<sum(s);
}
int sum(string s){
    int k;
    k=s.size();
    if(k>0){
        return int(s[k-1]-48)/2 + sum(s.erase(k-1, 1));
    }
    else{
        return 0;
    }
}
