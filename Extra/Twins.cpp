//https://codeforces.com/problemset/problem/160/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n ;
    int total(0), counts(0), y(0);
    int arr[n];
    bool arrEqual = true ;
    for(int i =0 ;i<n ;i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr, arr+n,greater<int>());
    for(int i =1 ; i < n; i++)
    {
        if(arr[i-1]!= arr[i]) arrEqual = false;
    }
    if(arrEqual) {
        cout << n/2 + 1 << endl;  
        return 0;
    }
    //if the numbers arent the same
    for(int j = 0; j < n ;j++)
    {   
        if(y > (total /2)) break;
        counts ++;
        y += arr[j];
    }
    cout << counts;
}