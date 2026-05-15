#include<iostream>
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

using namespace std;
int main(){
    char X;
    cin >> X;
    if (X <= 90){ // (X <= 'Z' && X >= 'A')
        X += 32;
    } else{
        X -= 32;
    }
    cout << X;
    return 0;
}