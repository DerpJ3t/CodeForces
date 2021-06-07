//https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string a1,a2;
    getline(cin,a1);
    getline(cin,a2);
    for(int i =0;i<a1.length();i++){
        if(isupper(a1[i])){
            a1[i]=tolower(a1[i]);
        }
        if(isupper(a2[i])){
            a2[i]=tolower(a2[i]);
        }
    }
    for(int i =0;i<a1.length();i++){
        if(a1[i]>a2[i]){
            cout << 1;
            return 0;
        }
        if(a1[i]<a2[i]){
            cout << -1;
            return 0;
        }else{
            continue;
        }
    }
    cout << 0;
}