#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int x=a[k-1];
    for(int i=0;i<n;i++){
    	if(a[i]>=x&&a[i]!=0){
            c++;
        }
    }
    cout<<c;
    return 0;
}
   


