//https://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m ;
    cin >> n >> m;
    int prime;

    for(n=n+1;n<=50;n++){
        int j;
        for(j=2;j<=n;j++){
            if(n%j==0){
                break;
            }
        }
        if(n==j){
            break;
        }
    }
    if(n==m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}