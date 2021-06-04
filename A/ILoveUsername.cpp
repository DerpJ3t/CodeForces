//https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , arr[1001];
    int count =0,min=10000,max=-1;
    int max_index , min_index;
    cin >> n ;
    for(int i =0 ;i<n;i++){
        cin >> arr[i];

    }
    for(int i =0,j=1 ;i<=j,j<n;i++,j++){
        
        if(max<arr[i]){
            max = arr[i];
            
        }
        if(min>arr[i]){
            min = arr[i];
        
        }
        if(arr[j]>max){
            count ++;
        }
        if(arr[j]<min){
            count ++;
        }   
        
       
    }
    cout << count ;
    
}