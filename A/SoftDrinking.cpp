//https://codeforces.com/problemset/problem/151/A   
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k*l; // the total amount of ml of drinks
    int toast_lime = c*d; // the total of lime slices
    int toast_drink = drink / nl;// how many toast u can make (drinks / nl); 
    int toast_salt = p/np;  // how many toasts u can make with the amount of salt obtained;
    int ans = min(min(toast_lime,toast_drink),toast_salt);// min can only be used for 2 arguments
    ans/=n;//for each friends (/ number of friends)
    cout << ans;

}