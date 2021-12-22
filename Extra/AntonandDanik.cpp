//https://codeforces.com/problemset/problem/734/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    string s ;
    int  n;
    int anton(0) , danik(0);
    cin >> n ;
    cin >> s; 
    for(int i = 0;i<n ;i++)
    {
        if(s[i] == 'A')  anton ++;
        else danik ++;
    }
    if(anton > danik) cout <<"Anton" << endl;
    else if(danik > anton) cout << "Danik" << endl;
    else cout << "Friendship " << endl;
}