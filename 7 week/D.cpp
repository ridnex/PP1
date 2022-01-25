/*#include <iostream>
using namespace std;
long long main(){
    string s;
    cin >> s;
    long long k=0;
    for(long long i=0; i<s.size(); i++){
        k+=long long(s[i])-long long('0');
    }
    cout << k;
}
*/

/*
#include <iostream>
using namespace std;

long long sum(long long n);

int main(){
    long long n; 
    cin >> n;
    cout << sum(n);
}

long long sum(long long n){
    if(n==0){
        return 0;
    }
    else{
        long long a; 
        a=n%10; 
        return a+sum(n/10);
    }
}
*/

#include <iostream>
using namespace std;
int sum(string s);
int main(){
    string s;
    cin >> s;
    cout <<sum(s);
}
int sum(string s){
    int k;
    k=s.size();
    if(k>0){
        return int(s[k-1]-48) + sum(s.erase(k-1, 1));
    }
    else{
        return 0;
    }
}