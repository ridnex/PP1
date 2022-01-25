#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int t;

    for (int i=0; i <s.size(); i++)
    {

        t=int(s[i]);
        if(t==122){
            s[i]=char(97);
        }
        else{
            s[i]=char(t+1);
        }
    }
    cout << s;
    
}