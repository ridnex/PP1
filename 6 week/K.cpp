#include <iostream>
using namespace std;

int qwe(string s){
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        cnt=cnt+int(s[i])-48;
    }
    return cnt;

}
int main(){
    string s;
    cin >> s;
    cout<<qwe(s);
}