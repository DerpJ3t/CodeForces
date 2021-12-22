//https://codeforces.com/problemset/problem/352/B
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,x,count;
    cin >> n;
    set<int> s;
    for(int i =0;i<n;i++){
        cin >> x;
        s.insert(x);
    }
    vector<int> v(s.begin(),s.end());
    sort(v.begin(),v.end());
    count = s.size();
    vector<int> ::iterator it ;
    for(it=v.begin();it!=v.end();it++){
        cout << *it << endl;
    }


}