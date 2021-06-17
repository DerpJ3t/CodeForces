//https://codeforces.com/problemset/problem/124/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    // a = at least(>=) , b = at most(<=);
    // sum of pos after a = n-a
    // sum of pos before = b+1
    int n ,a ,b,a_pos,b_pos;
    cin >> n >> a >> b;
    cout << min(n-a,b+1);
}