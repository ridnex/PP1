/*#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long a=0;
    long long b=1, c=0;
    if(n==2){
        c=1;
    }
    for(int i=0; i<n-2; i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout << c;
}*/


#include <iostream>
using namespace std;
int fiba(int n);
int main(){
    int n;
    cin >> n;
    cout << fiba(n);

}
int fiba(int n){
    if(n>3){
        return fiba(n-1)+fiba(n-2);
    }
    else if(n==2 or n==3){
        return 1;
    }
    else{
        return 0;
    }  
}
