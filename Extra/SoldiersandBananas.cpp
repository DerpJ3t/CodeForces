//https://codeforces.com/problemset/problem/546/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    int k , n , w;
    cin >> k >> n >> w;
    int temp = 1 ;
    int totalMoney(0);
    int money_borrow;
    for( int coifficient = 1; temp <= w ; coifficient++ , temp++)
    {
        totalMoney += coifficient*k;
    }

    money_borrow = totalMoney - n;

    if(money_borrow <=0 )
    {
        cout << 0 ;
    }
    else
    {
        cout << money_borrow;
    }
    
    
}