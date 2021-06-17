//https://codeforces.com/problemset/problem/230/A
#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
    bool level = true;
    int s,n,x,y;
    vector<pair <int,int>> v; // make the strength and bonus to a pair
    cin >> s >> n;
    for(int i =0;i<n;i++){
        cin >> x >> y;
        v.pb(make_pair(x,y)); // makes the pair
    }
    sort(v.begin(),v.end());
    for(int i =0;i<n;i++){
        if(s<=v[i].first){
            level = false;
            break;
        }
        else{
            s+=v[i].second;
        }
    }
    if(level){
        cout << "YES";
    }
    else{
        cout << "NO";
    }


}