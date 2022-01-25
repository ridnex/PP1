/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k=1;
    for(int i=0; i<n; i++){
        k=k*2;
    }
    cout << k;

}
*/

#include <iostream>
using namespace std;

int qwe(int);
int main(){
    int n;
    cin >> n;
    cout << qwe(n);
}

int qwe(int n){
    if(n>=1){
        return 2*qwe(n-1);
    }
    else{
        return 1;
    }
}