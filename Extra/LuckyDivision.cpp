//https://codeforces.com/problemset/problem/122/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n ;
    cin >>  n;
    bool lucky = true;
    int number = n;
    while(n!=0)
    {
        int remainder = (n % 10);
        if(remainder != 7 || remainder !=4) lucky = false;
        n /= 10;
    }
    if(number % 4 == 0 || number% 7 == 0 || number % 47 == 0 || number % 74 == 0 || number % 447 == 0 || number % 474 == 0 ||number % 477 == 0 || number % 744 == 0 ||number % 747 == 0 || number% 774 == 0 )
    {
        lucky = true ; 
    }
    else
    {
        lucky = false;
    }

    if(lucky) cout <<"YES" << endl;
    else cout << "NO";

}