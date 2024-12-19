#include<bits/stdc++.h>


using namespace std;


int main(){
    string s;
    char cur_char;
    int count = 0, cur_max = 0;
    cin >> s;
    for(auto c: s){
        if(cur_char != c){            
            count = 0;
            cur_char = c;
        }
        count ++;
        if(count > cur_max){
            cur_max = count;
        }
    }
    cout << cur_max << endl;
}