//https://codeforces.com/problemset/problem/215/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,m ,pedal[50],rear[50],max = -1,count(1),ratio;
    cin >> n ;
    for(int i =0;i<n;i++){
        cin >> pedal[i];
    }
    cin >> m;
    for(int i =0;i<m;i++){
        cin >> rear[i];
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rear[j]%pedal[i]==0){
                ratio = rear[j]/pedal[i];
                if(ratio==max){
                    count ++;
                }
                if(ratio>max){
                    count =1;
                    max= ratio;
                }
            }
        }
    }
    cout << count;
}