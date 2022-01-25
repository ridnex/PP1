/*#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int k=0;
    for(int i=0; i<s.size(); i++){
        if(int(s[i])%2==0){
            k++;
        }
    }
    cout << k;
}
*/

#include <iostream>
using namespace std;
int even(string s, int i);
int main(){
    string s;
    cin >> s;
    cout << even(s, 0);

}
int even(string s, int i){
    if(i<s.size()){
        if(s[i]%2==0){
            return 1+even(s, i+1);
        }
        else{
            return even(s, i+1);
        }
    }
    else{
        return 0;
    }
}