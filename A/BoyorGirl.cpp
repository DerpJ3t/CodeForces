//https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    char s[100];
    cin >> s;
    int count =1;
    int len =strlen(s);
    sort(s,s+len);
    for(int i =0;i<len-1;i++){
        if(s[i]!=s[i+1]){
            count ++;
        }
    }
    if(count%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    
}