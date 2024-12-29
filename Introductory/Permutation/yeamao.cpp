#include <bits/stdc++.h>
using namespace std;


int main() {
    int end;
    cin >> end;
    if(end < 5){
        cout << "No Solution";
    }
    else{
        for(int i = 1; i <= end; i += 2){
            cout << i << " ";
        }
        for(int i = 2; i <= end; i += 2){
            cout << i << " ";
        }
    }
}
