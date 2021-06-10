//https://codeforces.com/problemset/problem/339/B
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n ,m,time(0),x;
    cin >> n >> m ;
    long long current =1;
    for(int i =0;i<m;i++){
        cin >> x;
        if(x-current>=0){
            time+=x-current;
            current =x;
        }else{
            time+= n-current+x; // if goal is lower than current; the time needed to go back 
            current = x;        // is n - current + goal;
        }
    }
    cout << time;
}
