//http://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>

using namespace std;
// "." ==0
// '-.' ==1
// "--" == 2
int main(){
    string x ;
    getline(cin, x);
    for(int i=0;i<x.size();i++){
        if(x[i]=='.'){
            cout << 0;
           

        }
        if(x[i]=='-' && x[i+1]=='.'){
            cout << 1 ;
            i++;

        }
        if(x[i]=='-' && x[i+1]=='-'){
            cout << 2;
            i++;
        }
    }
    
}