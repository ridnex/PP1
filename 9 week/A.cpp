/*#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n, x, y;
    cin >> n;
    map<int, int> r;
    for(int i=0; i<n; i++){
        cin >> x;
        cin >> y;
        r.insert(make_pair(x, y));
    }
    sort(r.begin(), r.end());

    map<int, int> ::iterator b;

    for(b=r.begin(); b!=r.end(); b++){
        cout <<b->first<<" "<<b->second<<endl;
    }

}*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n, x, y;
    cin >> n;
    vector< pair<int, int> > a;
    for(int i=0; i<n; i++){
        cin >> x;
        cin >> y;
        a.push_back(make_pair(x, y));
    }

    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        cout<< a[i].first << " "<<a[i].second<<"\n";
    }
}
