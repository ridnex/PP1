/*#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k=int(s[0])-48;
    for(int i=0; i<s.size(); i++){
        if(int((s[i])-48)>=k){
            k=int((s[i])-48);
        }
    }
    cout << k;
}*/

#include <iostream>
using namespace std;

long long wer(long long k, long long max);

int main(){
    long long c, d;
    cin >> c;
    d=c%10;
    cout << wer(c, d);

}

long long wer(long long k, long long max){
    if(k>0){
        int a;
        a=k%10;
        if(a>=max){
            max=a;
        }
        return wer( k/10, max);
    }
    else{
        return max;
    }
}