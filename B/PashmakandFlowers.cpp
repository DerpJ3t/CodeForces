//https://codeforces.com/problemset/problem/459/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n ,difference,count;
    ll mx=-1,mn= INT_MAX;
    ll x(0),y(0);
    cin >> n;
    ll arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
        mn = min(mn,arr[i]);
        mx = max(mx,arr[i]);
    }
    sort(arr,arr+n);
    difference = arr[n-1]-arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]==mx){
            x++;
        }
        if(arr[i]==mn){
            y++;
        }
    }
    if(mn==mx)count = n*(n-1)/2;
    else count = x*y; // combinations
    cout << difference << " " << count ;
    
}