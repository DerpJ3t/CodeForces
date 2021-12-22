//https://codeforces.com/problemset/status?my=on
#include <bits/stdc++.h>

using namespace std;

int main(){
    string x,y,z;
    int vowel_x(0), vowel_y(0), vowel_z(0);
    getline(cin,x);
    getline(cin,y);
    getline(cin,z);
    for(int i =0;i<x.size();i++){
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u'){
            vowel_x ++;
        }
    }
    for(int j =0;j<y.size();j++){
        if(y[j]=='a' || y[j]=='e' || y[j]=='i' || y[j]=='o' || y[j]=='u'){
            vowel_y ++;
        }
    }
    for(int k =0;k<z.size();k++){
        if(z[k]=='a' || z[k]=='e' || z[k]=='i' || z[k]=='o' || z[k]=='u'){
            vowel_z ++;
        }
    }
    if(vowel_x == 5 && vowel_y == 7 && vowel_z ==5){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}