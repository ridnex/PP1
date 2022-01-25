#include <iostream>
using namespace std;

double qwe(double a, double b){
    return (b*100)/a;
}
int main(){
    double c, d;
    cin >> c >>d;
    cout<<qwe(c, d);
}