//https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    int limak, bob;
    cin >> limak >> bob;
    int fullYear(0);
    while(limak <= bob )
    {
        limak *= 3;
        bob *= 2;

        fullYear++;
    }

    cout << fullYear;

}