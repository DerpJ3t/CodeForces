//https://codeforces.com/problemset/problem/445/A
#include <bits/stdc++.h>

using namespace std;
/*
The format:
BWBWBWBW
WBWBWBWB
BWBWBWBW

To do this we can find the sum of the position of the rows and columns.
After doing this we realize that the sum of positions for adjacent sides
are either odd or even
*/
int main(){
    int n ,m;
    char x[100];                   
    cin >> n >> m;
    for(int i =1;i<=n;i++){
        cin >> x;
        for(int j=1,k=0;j<=m;j++,k++){
            if(x[k]=='.'){
                if((i+j)%2!=0){    //if sum of positions is divisible by 2
                    cout << 'B';
                }
                else{
                    cout <<'W';
                }
            }
            else{
                cout <<'-'; //if placement is bad print -
            }
        }
        cout << endl;
    }
}