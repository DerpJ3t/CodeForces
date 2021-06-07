//https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b,c,door;
    getline(cin,a);
    getline(cin,b);
    getline(cin,door);
    c = a+b;
    sort(c.begin(),c.end());       //IM SO FUCKING DUMB I DK U CAN DO THIS
    sort(door.begin(),door.end());
    if(c == door){
        cout << "YES";
    }else{
        cout << "NO";
    }
}