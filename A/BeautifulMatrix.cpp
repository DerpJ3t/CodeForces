//http://codeforces.com/problemset/problem/263/A
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int x ;
  //rows
  for (int r=1;r<=5;r++){
    //columns
    for(int c=1;c<=5;c++){
      cin >> x;
      //when 1 is inserted, calculate the distance to reach mid(which is 3,3)
      if(x==1){
        cout << abs(r-3)+abs(c-3)<< endl;

      }
    }
  }



}
