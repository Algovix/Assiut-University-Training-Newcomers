#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

int main(){
    short int N, PUM = 1;
    cin >> N; 
    for (short int i = 0; i < N; i++){
        for (short int j = 0; j < 3; j++){
            cout << PUM << " ";
            PUM += 1;
        } cout << "PUM\n"; PUM += 1;
    }
    return 0;
}