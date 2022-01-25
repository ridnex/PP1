/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int t=n;
    int k=0, s=1;
    while(n>1){
        n=n/2;
        k++;
    }
    for(int i=0; i<k; i++){
        s=s*2;
    }
    if(t==s){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
*/

#include <iostream>
using namespace std;

int two(int n);
int main(){
    int n;
    cin >> n;
    if(two(n)==1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
int two(int n){
    if(n==1){
        return 1;
    }
    else if(n%2==0){
        return two(n/2);
    }
    else{
        return 0;
    }

}
