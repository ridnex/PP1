/*#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int s[a];
    int k=0;
    for(int i=0; i<a; i++){
        cin >> s[i];
    }
    int b;
    cin >> b;
    for(int i=0; i<a; i++){
        if(s[i]==b){
            k++;
            break;
        }
    }
    if(k==0){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
}
*/
#include <iostream>
using namespace std;

int qwe(int n, int a[], int x, int i);

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(qwe(n, a, x, 0 )==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int qwe(int n, int a[], int x, int i){
    
while(i<n){
        if(a[i]==x ){
            return 1;
        }
        else if(a[i]!=x ){
            return qwe(n,a,x,i+1 );
        
        }
    } 
    return 0; 
}
