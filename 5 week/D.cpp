#include <iostream>
using namespace std;
int main(){
    string n;
    int k=0;
    cin >> n;
    for(int i=0;i<n.size()/2+1;i++){
        if(n[i]==n[n.size()-1-i]){
            k++;

        }

    }
    if(k==n.size()/2+1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}