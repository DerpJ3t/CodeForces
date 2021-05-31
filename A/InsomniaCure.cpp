//https://codeforces.com/contest/148/problem/A
#include <bits/stdc++.h>
//count the numbers starting from 1 and ending at d, which are divisible by atleast one of k,l,m,n;
using namespace std;

int main(){
    int k,l,m,n,d,count=0;
    cin >> k;
    cin >> l; 
    cin >> m;
    cin >> n;
    cin >> d; //counted dragons
    
    //how many suffered moral or physical attack
    if(k==1 || l==1 ||m==1 || n==1){
        cout << d;
    }
    else{
        for(int i=1;i<=d;i++){
            if(i%k==0 || i%l==0 || i%m==0 || i%n ==0 ){
                count++;
            }
        }
        cout << count;

    }
    
}