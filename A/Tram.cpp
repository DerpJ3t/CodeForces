#include<iostream>
#include<cmath>
//  A = exit ; B = enter
using namespace std;

int main(){
    int n;
    cin >> n;
    int stillin=0, capacity =0;
    for(int i =0;i<n;i++){
        int a,b;
        cin >> a >> b;
        stillin-=a;
        stillin+=b;
        capacity=max(capacity,stillin);
    }
    cout << capacity;
	
    
}     