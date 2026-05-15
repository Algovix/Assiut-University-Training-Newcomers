#include <iostream>
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

using namespace std;
int main() {
    int N;
    cin >> N;
    cout << N / 365 << " years\n";
    cout << (N % 365) / 30 << " months\n";
    cout << (N % 365 % 30) << " days\n";
    
    return 0;
}