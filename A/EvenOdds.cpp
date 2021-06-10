//https://codeforces.com/problemset/problem/318/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,k,ans,m;
    cin >> n >> k;
    if(n%2!=0){
        m=(n/2)+1;
    }
    else{
        m=n/2;
    }
    if(k<=m){
        cout << (2*k)-1;
    }
    else{
        cout << ((k-m)*2);
    }
    
    
}