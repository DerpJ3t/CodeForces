//https://codeforces.com/problemset/problem/200/B
#include <bits/stdc++.h>

using namespace std;

int main(){
    double n, p,total=0;
    double fraction;

    cin >> n;
    for(int i =0; i<n;i++){
        cin >> p;
        total+=p;
    }
    fraction = (total*100)/(n*100);
    cout << setprecision(12) << fraction;


}