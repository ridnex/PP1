#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if((a % 2 == 1) or (a%2==0 and a>5 and a<=20)){
        cout << "Super";
    }
    else if((a%2==0 and a>=2 and a<=5) or (a%2==0 and a>20)){
        cout << "Not Super";

    }
    return 0;
}