//https://codeforces.com/problemset/problem/617/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;
    cin >> x;
    //5 steps
    int total = x / 5 ;
    int remainder = x%5 ;
    if(remainder !=0)
    {
        total += 1;
    }
    cout << total << endl;

}