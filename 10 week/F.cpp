#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    double l=10;
    double h=10;
    l=l/6-1;
    h=h/3-3;
    vector<vector <int> >a;
    vector<double> b;

    
    for(int i=0; i<n; i++){
        vector<int>c;

        for(int j=0; j<4; j++){
            double num;
            cin >> num;
            c.push_back(num);
        }
        a.push_back(c);
        
        
    }

    int cred=0;
    for(int i=0; i<a.size(); i++){
        cred=cred+a[i][3];
    }

    for(int i=0; i<a.size(); i++){
        int x=0;
        double z;
        for(int j=0; j<3; j++){
            x=x+a[i][j];
        }
        int y=0;
        for(int j=0; j<2; j++){
            y=y+a[i][j];
        }
        if(x<50 or y<30 or a[i][2]<20){
            z=0;
        }
        else if(x<55){
            z=1;
        }
        else if(x<60){
            z=1+h;
        } 
        else if(x<65){
            z=1+l;
        }
        else if(x<70){
            z=2;
        }
        else if(x<75){
            z=h+2;
        }
        else if(x<80){
            z=2+l;
        }
        else if(x<85){
            z=3;
        }
        else if(x<90){
            z=3+h;
        }
        else if(x<95){
            z=3+l;
        }
        else if(x<=100){
            z=4;
        }
        double k;
        k=z*a[i][3];
        b.push_back(k);
        
    }
    double cnt=0;
    for(int i=0; i<b.size(); i++){
        cnt= cnt+ b[i];
    }
    
    double p=cnt/cred;
    cout << p;
    

}