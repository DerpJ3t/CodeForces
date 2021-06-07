//https://codeforces.com/problemset/problem/272/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,f,dima(0);
    cin >> n;
    int fingers(0);
    int ppl = n+1;
    for(int i =0;i<n;i++){
        cin >> f;
        fingers+=f;
    }
    for(int i =1;i<=5;i++){
        int total = fingers+i;
        if(total%ppl!=1){
            dima ++;
        }
    }
    cout << dima ;

}