//https://codeforces.com/problemset/problem/224/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    // x =ab;
    // y = bc;
    // z = ca;
    // xz = a^2*b*c
    // a^2 = xz/bc
    // a = sqrt(xz/y) ( since bc = y)
    int x , y , z,ans;
    int a, b, c;
    cin >> x >> y >> z ;
    a = sqrt((x*z)/y);
    b = sqrt((x*y)/z);
    c = sqrt((z*y)/x);
    ans = 4*(a+b+c);
    cout << ans;
}