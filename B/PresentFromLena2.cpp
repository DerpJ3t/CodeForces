#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin >> n;
    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);
        for (int i = 0; i < abs(row); ++i)
        {
            cout << "  ";
        }
        //left side before mid
        for (int i = 0; i < top; ++i)
        {
            cout << i << " ";
        }
        //right side except 0
        for (int i = top; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
}