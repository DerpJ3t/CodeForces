//https://codeforces.com/problemset/problem/337/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,m ,puzzle[50];
    cin >> n >> m;
    for(int i =0 ;i<m;i++){
        cin >> puzzle[i];
    }
    sort(puzzle,puzzle+m);
    int min = puzzle[n-1]-puzzle[0];
    for(int i =1;i<=m-n;i++){
        int yuhong = puzzle[i+n-1]-puzzle[i];
        if (yuhong < min){
            min = yuhong;
        }
    }
    cout << min;
    
}