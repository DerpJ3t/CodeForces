//https://codeforces.com/problemset/problem/677/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n , h;
    int width(0);
    cin >> n >> h;
    int friends[n];
    for(int i =0 ; i < n ; i++)
    {
        cin >> friends[i];
        if(friends[i] > h)
        {
            width+=2;
        }
        else
        {
            width++;
        }
    }   
    cout << width; 

    
}