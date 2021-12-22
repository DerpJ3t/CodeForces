//https://codeforces.com/problemset/problem/136/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    int receive[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n ; i++)
    {
        receive[arr[i] - 1] = i+1;
    }
    for(int k = 0 ; k < n; k++)
    {
        cout << receive[k] << " " ;
    }    
}