#include <iostream>
using namespace std;

int qwe(int a){
    if(a<0){
        return -1*a;
    }
    else{
        return a;
    }
}
int main(){
    int s;
    cin >> s;
    cout << qwe(s);
}