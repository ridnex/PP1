#include <iostream>
#include <string>
using namespace std;

string sre(string a){
    int k=0;
    while(k<a.size()){
        for(int i=0; i<a.size();i++){
            if(int(a[i])==65 or int(a[i])==69 or int(a[i])==73 or int(a[i])==79 or int(a[i])==85){
                a.erase(i,1);
            }
            else if(int(a[i])==97 or int(a[i])==101 or int(a[i])==105 or int(a[i])==111 or int(a[i])==117){
                a.erase(i,1);
            }
        }
        k++;
    }
    return a;
}

int main(){
    string s;
    getline(cin, s);
    cout<<sre(s);
}