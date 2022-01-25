#include <iostream>
#include <stack>
#include <algorithm>
#include <sstream>
#include <cmath>
using namespace std;
bool qwe(int k){
    int x=0;
    for(int i=0; i<sqrt(k)+1; i++){
        if(i*i==k){
            x=1;
        }
    }
    if(x==1){
        return true;

    }
    return false;
}

int wer(string t){
    int k;    
    stringstream ss;
    ss<<t;
    ss>>k;
    return k;
}
int main(){
    string g;
    cin >> g;
    stack<char>s;
    stack<char>b;
    string u;
    for(int i=0; i<g.size(); i++){
        s.push(g[i]);
        b.push(g[i]);
        if(s.size()>1){
            string u;
            char t=s.top();
            s.pop();
            u.push_back(s.top());
            u.push_back(t);
            s.push(t);
            if(qwe(wer(u))){
                b.pop();
                b.pop();
                s.pop();
                s.pop();
            }
        }
        
    }


    if(b.empty()){
        cout<<"Stack is empty";
    }
    while(!b.empty()){
        cout <<b.top();
        b.pop();
    }
}
