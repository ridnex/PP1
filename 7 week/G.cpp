/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s=1;
    for(int i=1; i<=n; i++){
        s=s*i;    
    }
    cout<<s;
}*/

#include <iostream>
using namespace std;

int fuck(int n);

int main(){
    int s;
    cin >> s;
    cout << fuck(s);
}

int fuck(int n){
    if(n>1){
        return n*fuck(n-1);
    }
    else{
        return 1;
    }
}