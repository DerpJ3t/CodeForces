//https://codeforces.com/problemset/problem/43/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x(0),y(0);
    cin >> n;
    string s,a,b;
    cin >> s;
    a = s;
    x++;
    for(int i =1;i<n;i++){
        cin >> s;
        if(s==a){
            x++;
        }
        else{
            b=s;
            y++;
        }
    }
    if(x>y){
        cout << a;
    }
    else{
        cout << b;
    }
    
}