/*
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long qwe(int n){
    return pow(n, n);
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<=n; i++){
        cout << qwe(i)<<" ";
    }

}
*/

//for_each

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
void qwe(long long n){
    long long k=1;
    for(long long i=0; i<n; i++){
        k=k*n;
    }
    cout << k <<" ";
}
int main(){
    long long n;
    cin >> n;
    vector<long long>a;
    for(long long i=0; i<=n; i++){
        a.push_back(i);
    }
    for_each(a.begin(), a.end(), qwe);
}



