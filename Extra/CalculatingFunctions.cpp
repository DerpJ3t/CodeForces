//https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll n ;
    cin >> n ;
    if(n % 2 == 0)
    {
        cout << (n/2);
    }
    else
    {
        cout << n/2 - n;
    }

}