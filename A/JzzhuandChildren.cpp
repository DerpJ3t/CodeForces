//https://codeforces.com/problemset/problem/450/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,m ,last;
    double l,max(0);
    cin >> n >> m;
    for(int i =1;i<=n;i++){
        cin >> l;   
        if(ceil(l/m)>=max){   
            last =i;
            max=ceil(l/m);
        }
    }
    cout << last;
    
    
}