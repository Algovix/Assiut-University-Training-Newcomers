#include<iostream>
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    cout << (A % B == 0 ||  B % A == 0 ? "Multiples" : "No Multiples");
    return 0;
}