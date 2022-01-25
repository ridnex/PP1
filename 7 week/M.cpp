#include <iostream>
using namespace std;
int qwe(int n, int k);

int main(){
    int a;
    cin >> a;
    qwe(a, a);
}

int qwe(int n, int k){
    if(n>0){
        cout << k+1-n << " ";
        return qwe(n-1, k);
    }
    else{
        return 0;
    }
}