/*#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long a, s=0, k=1;
    do
    {
        a=n%2;
        n=(n-a)/2;
        s=s+k*a;
        k=k*10;
    } while (n>=1);
    cout << s;
}
*/




/*#include <iostream>
using namespace std;

long long qwe(long long n, long long k);

int main(){
    long long s;
    cin >> s;
    cout << qwe(s , 1);

}
long long qwe(long long n, long long k){
    int a;
    if(n>=1){
        a=n%2;
        return k*a+qwe((n-a)/2, k*10);
    }
    else{
        return 0;
    }
}
*/

#include <iostream>
using namespace std;

string qwe(int n){
    if(n==0){
        return "0";
    }
    else if(n==1){
        return "1";
    }
    else{
        return qwe(n/2) + qwe(n%2);
    }
}

int main(){
    int n;
    cin >> n;
    cout<< qwe(n);
}