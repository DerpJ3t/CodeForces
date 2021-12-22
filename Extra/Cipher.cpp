
#include <bits/stdc++.h>
#define pb push_back
using namespace std;


int main()
{   
    vector<pair<char, char>> conversion;
    string S = "ctej";
    string U = S;
    int K = 2;
    string A = "zyxwvutsrqponmlkjihgfedcba";
    string B = "cbafedihglkjonmrqputsxwvzy";

    for(int i =0;i<A.size();i++){
        conversion.pb(make_pair(A[i],B[i]));
    }
    for(int i =0;i<K;i++){
        for(int j =0;j<S.size();j++){
            for(int k = 0;k<conversion.size();k++){
                if(conversion[k].first ==S[j]){
                    U[j] = conversion[k].second;
                }
                else continue;
            }
        }
         S = U;
    }
    for(int i =0;i<S.size();i++){
        cout << S[i] ;
    }
    
    return 0;
}