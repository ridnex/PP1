/*#include <iostream>
using namespace std;
int main(){
    int n;
    int k=0;
    while(n!=0){
        cin >> n;
        k+=n;
    }
    cout << k;

}
*/

#include <iostream>
using namespace std;
int infinite(int n);
int main(){
    int n, t;
    cin >> n;
    t=n;
    cout<<infinite(n)+t;
}
int infinite(int n){
    if(n!=0){
        cin >> n;
        return n+infinite(n);
        
    }
    else{
        return 0;
    }
    

}