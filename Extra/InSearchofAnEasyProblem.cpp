//https://codeforces.com/problemset/problem/1030/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n ;
    cin >> n ; 
    bool hard = false;
    int ask;
    while(n--)
    {
        cin >> ask;
        if(ask == 1)
        {
            hard = true;
        }
    }
    if(hard) cout << "HARD" << endl;
    else cout << "EASY" << endl;
}