//https://codeforces.com/problemset/problem/133/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s ;
    getline(cin,s);
    for(int i =0;i<s.length();i++){
        if(s[i] == 'H' || s[i]=='Q' || s[i]=='9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO" ;
}