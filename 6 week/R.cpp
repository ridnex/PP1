#include <iostream>
using namespace std;

string qwe(string a){
    if(int(a[0])>96){
        a=char(int(a[0])-32);
    }
    return a;
}
int main(){
    string s;
    cin >> s;
    cout<< qwe(s);
}