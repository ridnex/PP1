#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1; i*i<=a; i++){
        cout << i*i<< endl;
    }
}