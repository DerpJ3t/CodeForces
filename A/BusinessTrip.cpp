//https://codeforces.com/problemset/problem/149/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int k ,a[12],height(0),count(0);
    bool can = false;
    cin >> k;
    for(int i =0;i<12;i++){
        cin >> a[i];
    }
    if(k==0) {
        cout << 0 ; return 0;
    }
    else{
    sort(a,a+12,greater<int>());// sort in descending order
    for(int i =0;i<12;i++){
        height+=a[i];
        count ++;
        
        if(height>=k){
            can = true;
            break;
            
        }    
    }
    if(can){
        cout << count ;
    }
    else{
        cout << -1;
    }
    }
    
}