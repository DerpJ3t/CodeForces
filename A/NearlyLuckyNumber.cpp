//https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int x;
    int count=0;
    cin >> x;
    while(x!=0){
       int a;
       
       a=x%10;
       if(a==7 || a==4){
           count ++;
       }
       
       x/=10;

    }
    if(count==4 || count ==7){
        cout << "YES";
    }
    else{ 
        cout << "NO" << endl;
    }
    
}