//https://codeforces.com/problemset/problem/34/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,min=1000,min1,min2,subt;
    cin >> n ;
    int arr[n+1];
    for(int i =1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i =1;i<=n;i++){
        if(i==1){
            subt = abs(arr[i]-arr[n]);
        }
        else{
            subt = abs(arr[i]-arr[i-1]);
        }
        if(subt<min){
            if(i==1){
                min = subt;
                min1 = n;
                min2 = i;
            }
            else{
                min = subt;
                min1 = i-1;
                min2 = i;
            }
        }
    }
    cout << min1 <<" " << min2;
}