#include <iostream>
using namespace std;
void rev(int x, int a[]){
    int t;
    for(int i=0; i<x/2; i++){
        t=a[i];
        a[i]=a[x-i-1];
        a[x-i-1]=t;
    }
    for(int i=0; i<x; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int x;
    cin >> x;
    int a[x];
    for(int i=0; i<x; i++){
        cin>>a[i];
    }
    rev(x, a);


}
