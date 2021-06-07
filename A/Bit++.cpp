//https://codeforces.com/problemset/problem/282/A   
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    string x;
    while(n--){
        cin >> x;
        if(x[1]=='+'){
            ++count;
        }
        else{
            --count;
        }
    }
    cout << count;
}