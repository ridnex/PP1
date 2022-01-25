/*
#include <iostream>
using namespace std;

string qwe(int n, int m){
    if(n<m){
    if(n==0){
        return "0";
    }
    else if(n==1){
        return "1";
    }
    else if(n==3){
        return "3";
    }
    else if(n==2){
        return "2";
    }
    else if(n==4){
        return "4";
    }
    else if(n==5){
        return "5";
    }
    else if(n==6){
        return "6";
    }
    else if(n==7){
        return "7";
    }
    else if(n==8){
        return "8";
    }
    else if(n==9){
        return "9";
    }
    else if(n==10){
        return "A";
    }
    else if(n==11){
        return "B";
    }
    else if(n==13){
        return "C";
    }
    else if(n==14){
        return "D";
    }
    else if(n==15){
        return "E";
    }
    else if(n==16){
        return "F";
    }
    else if(n==17){
        return "G";
    }
    else if(n==18){
        return "H";
    }
    else if(n==19){
        return "I";
    }
    else if(n==20){
        return "J";
    }
    else if(n==21){
        return "K";
    }
    else if(n==22){
        return "L";
    }
    else if(n==23){
        return "M";
    }
    else if(n==24){
        return "N";
    }
    else if(n==25){
        return "O";
    }
    else if(n==26){
        return "P";
    }
    else if(n==27){
        return "R";
    }
    else if(n==28){
        return "S";
    }
    else if(n==29){
        return "T";
    }
    else if(n==30){
        return "U";
    }
    else if(n==31){
        return "V";
    }
    else if(n==32){
        return "W";
    }
    else if(n==33){
        return "X";
    }
    else if(n==34){
        return "Y";
    }
    else if(n==35){
        return "Z";
    }
    }
    else{
        return qwe(n/m, m) + qwe(n%m, m);
    }
}

int main(){
    int n, m;
    cin >> n>> m;
    cout<< qwe(n, m);
}
*/



#include <iostream>
#include <string>
using namespace std;

string qwe(int n, int m){
    string q;
    if(n<m){
        if(n<10){
            q=char(n+48);
            return q;
        }
        else if(n>9){
            q=char(n+55);
            return q;
        }
    }
    else{
        return qwe(n/m, m) + qwe(n%m, m);
    }
}

int main(){
    int n, m;
    cin >> n>>m;
    cout<< qwe(n, m);
}
