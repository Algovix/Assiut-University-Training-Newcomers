#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O

int main(){
    short int N;
    cin >> N;
    for (short int R=1;R<=N;R++){
        for (short int j=0;j<R;j++){
            cout << "*";
        } cout << "\n";
    }
    return 0;
}