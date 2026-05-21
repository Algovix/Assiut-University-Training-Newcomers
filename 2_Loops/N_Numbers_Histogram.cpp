#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N

int main(){
    short int X, N; char S;
    cin >> S >> N;
    for (short int i = 0; i < N; i++){
        cin >> X;
        for (short int j = 0; j < X; j++){
            cout << S;
        } cout << "\n";
    }
    return 0;
}