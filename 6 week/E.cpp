#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void squ(int a, int b){
    double c;
    c = sqrt( a*a+b*b);
    if(c<10){
        cout << fixed << showpoint;
        cout << setprecision(3);
        cout << c;

    }
    else{
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << c;
    } 

}

int main(){
    int a, b;
    cin >> a >> b;
    squ(a, b);
}