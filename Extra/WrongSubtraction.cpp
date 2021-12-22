//https://codeforces.com/problemset/problem/977/A
#include <bits/stdc++.h>

using namespace std;


int find_last_digit(int x)
{
    return x % 10;
}
int main(){

    int n , k;
    cin >> n >> k;
    for(int i =0; i<k ; i++)
    {
        int last_digit;
        if(find_last_digit(n)!=0)
        {
            n -=1;
        }
        else
        {
            n /= 10;
        }
    }

    cout << n << endl;
}