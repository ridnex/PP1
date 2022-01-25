#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n;
    cin >> n;

    double r;
    r = sqrt(n);
    int c = r;
    double d = r-c;
    if(d>0){
        cout << "No";
    }else{
        cout << "Yes";
    }
}