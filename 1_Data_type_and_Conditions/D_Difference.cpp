#include <iostream>
using namespace std;

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << "Difference" << " = " << (A * B) - (C * D);
    return 0;
}
