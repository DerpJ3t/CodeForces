//https://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>
//maxindex-1+n-minindex
//(maxindex-1+n-minindex)-1 {if n is odd number}
using namespace std;

int main(){
    int n,maxvalue=0,maxindex,minvalue=101,minindex,seconds;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x>maxvalue){
            maxvalue=x;
            maxindex=i;
        }
        if(x<=minvalue){
            minvalue=x;
            minindex=i;
        }
    
        
    }
    if(maxindex < minindex){
        seconds = maxindex-1+n-minindex;
    }
    else{
        seconds= (maxindex-1+n-minindex)-1;
    }
    cout << seconds;
    
}    
    