#include<bits/stdc++.h>

using namespace std;


int main(){
    int amount, num, pre_num = 0, modify_count = 0;
    cin >> amount;
    for(int i=0; i < amount; i++){
        cin >> num;
        if(pre_num != 0 && num <= pre_num){ // 代表已經有前一個數字
            modify_count += pre_num - num;
            pre_num = pre_num + 1;
        }   
        else{
            pre_num = num;
        }
    }
    cout << modify_count << endl;
}