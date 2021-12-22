//https://codeforces.com/problemset/problem/344/A
#include <bits/stdc++.h>

using namespace std;

//0 is positive, 1 is negative
int main(){

    int n ;
    cin >> n ;
    int magnets_number = n;
    string magnets[n];
    for(int i = 0; i < n; i++)
    {
        cin >> magnets[i];
    }
    for(int i = 1; i< n; i++)
    {
        int j;
        if(magnets[i-1][1] != magnets[i][0])
        {
            magnets_number --;
        }
    }
    cout << magnets_number << endl;
}