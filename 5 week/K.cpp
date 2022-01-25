#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k=0;
    for(int i=0;i<s.size();i++){
        if( s[i]==97  ){
            k++;
        }
        else if(s[i]==101 ){
            k++;
        }
        else if(s[i]==105 ){
            k++;
        }
        else if(s[i]==111 ){
            k++;
        }
        else if(s[i]==117 ){
            k++;
        }
    }
    cout << k;
}