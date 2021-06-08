//https://codeforces.com/problemset/problem/165/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,supercentral(0);
    cin >> n;
    int x[1000],y[1000];
    bool r(false),l(false),u(false),low(false);
    for(int i =0 ;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for(int i =0 ;i<n;i++){
        bool r(false),l(false),u(false),low(false);
        for(int j=0;j<n;j++){
            if(x[j]>x[i] && y[i]==y[j]) r = true; // if(x` > x )
            if(x[j]<x[i] && y[i]==y[j]) l = true;// if(x` < x )
            if(x[j]==x[i] && y[i]<y[j]) u = true;// if(y` > y )
            if(x[j]==x[i] && y[i]>y[j]) low = true;// if(y` < y )
        }
        if(r == true && l == true && u == true && low ==true){
            ++supercentral;
        }
    }
    cout << supercentral;
}