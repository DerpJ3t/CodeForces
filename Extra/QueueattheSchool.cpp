//https://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n , t;
    string queue;
    cin >> n >> t;
    cin >> queue;
    for(int i =0; i< t ;i++)
    {   
        int j = 0 ;
        while(j < n)
        {   
            char temp ;
            if(queue[j] == 'B' && queue[j+1] == 'G')
            {
                temp = queue[j];
                queue[j] = queue[j+1];
                queue[j+1] = temp;
                j+=2;

            }
            else
            {
                j++;

            }
            
        }
    }
    cout << queue;

}