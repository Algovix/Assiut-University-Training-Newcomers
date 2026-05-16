#include <iostream>
using namespace std;
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
int main(){
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    A %= 100; B %= 100; C %= 100; D %= 100;
    long long result = (A * B * C * D) % 100;
    if (result < 10) {
        cout << "0" << result; 
    } else {
        cout << result;
    }
    return 0;
}