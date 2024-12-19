#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N != 1){
        if (N % 2 == 0){ // even
            N /= 2;
        }
        else{
            N = N * 3 + 1;
        }
        cout << N << " ";
    }
    return 0;
}