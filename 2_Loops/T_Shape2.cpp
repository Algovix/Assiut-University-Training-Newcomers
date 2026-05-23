#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

int main(){
    short int N,Stars=1;
    cin >> N;
    for (short int i = N; i > 0; i--){
        for (short k = 1; k < i; k++){
            cout << " ";
        } for (short S = 0; S < Stars; S++){
            cout << "*";
        } Stars += 2; cout << "\n";
    }
    return 0;
}