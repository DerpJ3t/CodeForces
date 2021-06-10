//https://codeforces.com/problemset/problem/320/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    bool bruh = true;
    for(int i =0;i<n.length();){
        if(n[i]=='1'&& n[i+1]=='4' && n[i+2]=='4'){
            i+=3;
        }
        else if(n[i]=='1'&& n[i+1]=='4'){
            i+=2;
        }
        else if(n[i]=='1'){
            i++;
        }
        else{
           bruh = false;
           break;
        }
    }
    if(bruh){
        cout <<"YES";
    }else{
        cout <<"NO";
    }
    
}