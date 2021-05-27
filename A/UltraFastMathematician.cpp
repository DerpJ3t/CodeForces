//https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string x , y;
    getline(cin,x);
    getline(cin,y);
    for(int i=0;i<x.length();i++){
        if(x[i]==y[i]){
            cout << 0;
        }else{
            cout << 1;
        }
    }
    
    
}