//https://codeforces.com/problemset/problem/118/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    char x[100];
    int count (0);
    cin >> s;
    for(int i =0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    for(int i =0;i<s.length();i++){
        if(s[i]!='a'&& s[i]!='o'&& s[i]!='y'&& s[i]!='e' && s[i]!='u' && s[i]!='i'){
            cout << "." << s[i];
        }

    }
    
    
}