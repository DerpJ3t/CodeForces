#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int x=0;x<=n;x++){
        string str;
        getline(cin,str);
        if(str.size()<11){
            cout << str << endl;

        }
        else{
            cout << str[0] << str.size()-2 << str[str.size()-1] << endl;
        }

    }
}
    