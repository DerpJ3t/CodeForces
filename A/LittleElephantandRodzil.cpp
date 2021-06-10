//http://codeforces.com/problemset/problem/205/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,min_pos,count(1);
    long min =pow(10,9)+1,time;
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> time ;
        if(min> time){
            min =time;
            min_pos = i+1;
            count = 1;
        }
        else if(time == min){
            count ++;
        }
    }
    if(count==1){
        cout << min_pos;
    }
    else{
        cout << "Still Rozdil";
    }

    
}