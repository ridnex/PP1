#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a%2==0 and a!=0){
        cout << "Even";
    }
    else if(a%2==1){
        cout << "Odd";
    }
    else{
        cout << "None";

    }
    return 0;
}