#include<bits/stdc++.h>

using namespace std;

int main(){
    int num_amount = 0, total = 0;
    cin >> num_amount;
    for(int i = 0; i < num_amount - 1; i++){
        int tmp;
        cin >> tmp;
        total += tmp;
    }
    cout << ((num_amount + 1) * num_amount / 2) - total << endl;
}