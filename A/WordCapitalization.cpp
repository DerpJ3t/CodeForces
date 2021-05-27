//http://codeforces.com/problemset/problem/281/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    string yuhong;
    getline(cin, yuhong);
    if(islower(yuhong[0])){
        yuhong[0]=toupper(yuhong[0]);

    }
    cout << yuhong;
}