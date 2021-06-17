//https://codeforces.com/problemset/problem/118/B
//no space version
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin >> n;
    int i ,j,k,z,y;
    //upper part
    for(int i =1;i<=n+1;i++){
        //space of left part
        for(j=0;j<n+1-i;j++){     
            cout <<" ";
        }
        //digits; (left part)
        for(k=0;k<i-1;k++){
            cout << k;
        }
        cout << k;
        //right part;
        for(k=0;k<(i-1);k++){
            cout << i-2-k;
        }
        cout << "\n";
    }

    z=n;
    y=n-1;
    //lower part of the pattern
    for(i=1;i<=n;i++){
        //space of left part
        for(j=1;j<=i;j++){
            cout <<" ";
        }
        for(k=0;k<z-1;k++){
            cout << k;
        }
        cout << k;
        z--;

        //right part
        for(k=y-1;k>=1;k--){
            cout << k;
        }
        if(k>=0){
            cout <<k;
        }
        y--;
        cout <<"\n" ;
    }

}