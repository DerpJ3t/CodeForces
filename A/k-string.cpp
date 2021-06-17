//https://codeforces.com/problemset/problem/219/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,count(0);
    char x;
    string s;
    cin >> k;
    cin >> s;
    sort(s.begin(),s.end());
    for(int i =0;i<s.length();i++){
        if(i%k==0){
            x = s[i];
        }
        if(x==s[i]){
            count ++;
        }
    }
    if(count%k==0 && s.length()==count){
        for(int i =0;i<k;i++){
            for(int j =0;j<s.length();j+=k){
                cout << s[j];
            }
        }
    }
    else{
        cout << -1;
    }
}