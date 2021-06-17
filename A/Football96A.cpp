//https://codeforces.com/problemset/problem/96/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int count=1;
    bool bruh = false;
    cin >> s;
    for(int i =0;i<s.length();i++){
        if(count>=7){
            bruh = true;
            break;
        }
        if(s[i]==s[i+1]){
            count ++;
        }
        else{
            count =1;
        }
    }
    if(bruh){
        cout <<"YES";
    }
    else{
        cout << "NO";
    }
}