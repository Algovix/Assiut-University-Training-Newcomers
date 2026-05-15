#include<iostream>
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

using namespace std;
int main(){
    std::string F1; std::string L1;
    std::string F2; std::string L2;
    cin >> F1 >> L1;
    cin >> F2 >> L2;
    cout << (L1 == L2 ? "ARE Brothers" : "NOT");
    return 0;
}