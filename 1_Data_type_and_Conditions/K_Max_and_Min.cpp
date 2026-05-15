#include<iostream>
#include <algorithm>
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    cout << std::min({A, B, C}) << " " << std::max({A, B, C});
    return 0;
}