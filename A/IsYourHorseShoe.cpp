//https://codeforces.com/problemset/problem/228/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[5],count =3;
    for(int i =0;i<4;i++){
        cin >> arr[i];
    }
    sort(arr,arr+4); //sort it so that it loops in ascending order 
    for(int i=0;i<3;i++){
        if(arr[i]!=arr[i+1]){
            count --;
        }
    }
    cout << count ;
}