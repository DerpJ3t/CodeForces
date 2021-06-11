//https://codeforces.com/problemset/problem/41/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,t;
    bool verify= true;
    cin >> s;
    cin >> t;
    int len= s.length();
    for(int i =0,j=len-1;i<len;i++,j--){
        if(s[i]!=t[j]){
            verify=false;
        }
    }
    if(verify){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}