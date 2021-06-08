//https://codeforces.com/problemset/problem/139/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    double n ;
    int page[7],j(0),read(0);
    cin >> n;
    for(int i=0;i<7;i++){
        cin >> page[i];
    }
    double weeks = ceil(n/read);
    while(j<weeks){
        for(int i =0;i<7;i++){
            read+=page[i];
            if(read>=n){
                cout << i +1;
                return 0;
            }
        }
    }
}
// theres a better version to this solution