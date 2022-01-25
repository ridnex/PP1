#include <iostream>
#include <queue>

using namespace std;
int main(){
    string s;
    cin >> s;
    queue<char>b;
    for(int i=0; i<s.size(); i++){
        b.push((s[i]));
    }
    while(!b.empty()){
        if(b.front()=='1' and b.size()==1){
            b.pop();
            cout<<1;
        }
        if(b.front()=='0'){
            cout <<0;
            b.pop();
        }
        else if(b.front()=='1'){
            b.pop();
            if(b.front()=='0'){
                b.pop();
                cout<<10;
            }
            else{
                b.pop();
            }
        }
    }

}