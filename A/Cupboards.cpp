//https://codeforces.com/problemset/problem/248/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,l[100001],r[100001];
    int l1 =0 ,l0 =0, r1=0,r0=0,count =0;
    cin >> n;
    for(int i =0;i<n;i++){
        
        cin >> l[i] >> r[i];
        
    }
    for(int i =0;i<n;i++){
        if(l[i]==1){
            l1++;
        }
        else{
            l0++;
        }
    
    }
    for(int i =0;i<n;i++){
        if(r[i]==1){
            r1++;
        }
        else{
            r0++;
        }
    }
    count=min(l1,l0)+min(r1,r0);
    cout << count ;
} 