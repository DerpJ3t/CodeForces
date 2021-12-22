//https://codeforces.com/problemset/problem/716/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , c;
    int total(0);
    cin >> n >> c;
    int temp(0);
    for(int i =0;i<n;i++){
        int a,temp;
        cin >> a;
        if(abs(temp-a)<=c){
            total++;
        }
        else{
            total=1;
        }
        temp = a;
    }
    cout << total;
}