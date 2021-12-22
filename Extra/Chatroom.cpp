//https://codeforces.com/problemset/problem/58/A
#include <bits/stdc++.h>

using namespace std;

int main(){

    string s ;
    getline(cin ,s );
    vector <char> check ;
    string original = "hello";
    char arr[5] = {'h', 'e','l','l','o'};
    bool yes = true;
    for(int i = 0, j =0 ; i<s.size();i++)
    {
        if(s[i] == arr[j])
        {
            j++;
            check.push_back(s[i]);
        }
        if(j == 5) break;
    }
    if(check.size()!= 5) yes = false;
   
    if(yes) cout << "YES" << endl;
    else cout << "NO" << endl;


}