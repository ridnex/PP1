#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    int k=0;
    cin >> s >>t;
    if (s.find(t) != string::npos) {
        cout << "YES";
    }
    else{
        cout<<"NO";
    }
               


}