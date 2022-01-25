#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int maxi;
    maxi=int(s[0]);
    for(int i=0; i<s.size();i++){
        if(int(s[i])>=maxi){
            maxi=int(s[i]);
        }
    }
    /*stringstream ss;
    string t;
    ss << maxi;
    ss >> t;
    cout<<t;
    */
   cout<<char(maxi);
}