//https://codeforces.com/problemset/problem/352/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,f(0),z(0),k;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> k;
        if(k==0){
            z++;
        }
        else if (k==5){
            f++;
        }
    }
    if(z== 0){
        cout << -1;
    }
    else if(f < 9 ){
        cout << 0; // the smallest possible divisible by 90 is 9 fives and one zero
    }
    else{
        f = f - f%9; // makes f to 9 or multiples of 9
        for(int i =0;i<f;i++){
            cout << 5;
        }
        for(int i =0;i<z;i++){
            cout << 0;
        }
    }
   
   
    
   
}