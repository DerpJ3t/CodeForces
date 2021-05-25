//https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x ,y,z ,total=0;
    cin >> n ;
    for(int t=0;t<n;t++){
        cin >> x >> y >> z;
        if (x + y + z >=2){
            total +=1;
            
        }
        
    }
    cout << total << endl;
}