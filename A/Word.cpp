//http://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
//islower()
//isupper()
//toupper()
using namespace std;

int main(){
    int count_1=0,count_2=0;
    
    
    string str;
    getline(cin,str);
    int len= str.length();
    for(int i =0;i<len;i++){
        if(islower(str[i])){
            count_1++;
            
            
        }
        if(isupper(str[i])){
            count_2++;
            
        }
        
    }
    if(count_1>=count_2){
        for(int i =0;i<len;i++){
            str[i] = tolower(str[i]);
        }
        cout << str;
    }
    else{
         for(int j =0;j<len;j++){
            str[j] = toupper(str[j]);
        }
        cout << str;

    }
    


}